#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void movePlayer(int* currentX, int* currentY, int dx, int dy) {
    *currentX += dx;
    *currentY += dy;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    int height, width;
    cout << "Введите высоту карты: ";
    cin >> height;
    cout << "Введите ширину карты: ";
    cin >> width;

    char** map = new char*[height];
    for (int i = 0; i < height; i++) {
        map[i] = new char[width];
    }

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == 0 || y == 0 ||  x == width - 1 || y == height - 1)
            {
                map[y][x] = '#';

            }
            else{
                map[y][x] = ' ';
            }
        }
    }

    int playerX = 1, playerY = 1;
    map[playerY][playerX] = '@';

    map[height - 2][width - 2] = 'E';

    vector<char> history; 
    char input;

    while (true) {
        system("cls");
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++)
                cout << map[y][x];
            cout << "\n";
        }

        cout << "Введите направление (w/a/s/d): ";
        cin >> input;

        int dx = 0, dy = 0;

        switch (input) {
            case 'w': dy = -1; break;
            case 's': dy = 1; break;
            case 'a': dx = -1; break;
            case 'd': dx = 1; break;
            default: continue; 
        }

        int newX = playerX + dx;
        int newY = playerY + dy;

        if (map[newY][newX] == '#') continue;

        if (map[newY][newX] == 'E') {
            history.push_back(input); 
            cout << "Поздравляем! Вы достигли выхода!\n";
            break;
        }
        map[playerY][playerX] = ' '; 
        movePlayer(&playerX, &playerY, dx, dy);
        map[playerY][playerX] = '@'; 

        history.push_back(input);
    }
cout << "История ходов: ";
    for (char c : history) cout << c << ' ';
    cout << "\n";

    // Шаг 6: Сложная очистка
for (int i = 0; i < height; i++) {
    delete[] map[i]; // 1. Удаляем каждую строку (массив чаров)
}
delete[] map;        // 2. Удаляем сам массив указателей
map = nullptr;       // 3. Зануляем указатель для безопасности

    return 0;
}
