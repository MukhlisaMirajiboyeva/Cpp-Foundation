#include <iostream>
#include <vector>
#include <string>
#include <windows.h> 

using namespace std;

// Функция перемещения через указатели
// Меняет координаты напрямую в памяти main
void movePlayer(int* x, int* y, int dx, int dy) {
    *x += dx;
    *y += dy;
}

int main() {
    SetConsoleOutputCP(65001);

    int height, width;
    cout << "--- АРХИТЕКТОР ПАМЯТИ ---" << endl;
    cout << "Введите высоту лабиринта: "; cin >> height;
    cout << "Введите ширину лабиринта: "; cin >> width;

    // 1. ДИНАМИЧЕСКАЯ ПАМЯТЬ (2D массив)
    // Сначала создаем массив указателей (строк)
    char** map = new char*[height];
    
    // Потом под каждый указатель выделяем массив символов
    for (int i = 0; i < height; i++) {
        map[i] = new char[width];
    }

    // 2. Заполнение карты
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Если это границы карты - ставим стены
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                map[y][x] = '#';
            } else {
                map[y][x] = ' '; // Пустота внутри
            }
        }
    }

    // Координаты игрока и выхода
    int playerX = 1, playerY = 1;
    map[playerY][playerX] = '@';
    map[height - 2][width - 2] = 'E'; // Выход в правом нижнем углу

    vector<string> history; // История ходов
    bool isRunning = true;

    // 3. ИГРОВОЙ ЦИКЛ
    while (isRunning) {
        system("cls"); // Очистка консоли (для Windows)

        // Отрисовка карты
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << map[y][x];
            }
            cout << endl;
        }

        cout << "Управление: w, a, s, d (Ввод): ";
        char input;
        cin >> input;

        // Вычисляем, куда хочет пойти игрок
        int nextX = playerX;
        int nextY = playerY;

        switch (input) {
            case 'w': nextY--; history.push_back("Вверх"); break;
            case 's': nextY++; history.push_back("Вниз"); break;
            case 'a': nextX--; history.push_back("Влево"); break;
            case 'd': nextX++; history.push_back("Вправо"); break;
            default: continue; // Если нажата не та кнопка - повторить цикл
        }

        // Проверка на столкновение
        char targetCell = map[nextY][nextX];

        if (targetCell == '#') {
            // Врезались в стену
            continue; 
        } 
        else if (targetCell == 'E') {
            // Победа
            map[playerY][playerX] = ' '; // Стираем игрока со старого места
            map[nextY][nextX] = '@';     // Рисуем на новом
            movePlayer(&playerX, &playerY, nextX - playerX, nextY - playerY); // Обновляем координаты
            system("cls");
            cout << "ВЫ НАШЛИ ВЫХОД!" << endl;
            break; // Выход из цикла
        }
        else {
            // Обычное движение
            map[playerY][playerX] = ' '; // Стираем след
            // Обновляем координаты через функцию с указателями
            movePlayer(&playerX, &playerY, nextX - playerX, nextY - playerY);
            map[playerY][playerX] = '@'; // Ставим игрока на новое место
        }
    }

    // Вывод истории
    cout << "\nВаш путь:" << endl;
    for (const string& step : history) {
        cout << step << " -> ";
    }
    cout << "ФИНИШ" << endl;

    // 4. ОЧИСТКА ПАМЯТИ (Самый важный этап для 2D массива)
    // Сначала удаляем каждую строку отдельно
    for (int i = 0; i < height; i++) {
        delete[] map[i];
    }
    // Потом удаляем массив указателей
    delete[] map;
    map = nullptr;

    return 0;
}