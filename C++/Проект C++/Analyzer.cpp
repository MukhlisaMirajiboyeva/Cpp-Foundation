#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

// Функция анализа: принимает константный указатель (защита данных)
double calculateAverage(const double* data, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(data + i); // Арифметика указателей
    }
    return (size > 0) ? sum / size : 0;
}

int main() {
    SetConsoleOutputCP(65001); // Настройка кириллицы
    srand(time(0));

    int serverCount;
    cout << "Введите количество серверов для мониторинга: ";
    cin >> serverCount;

    // ДИНАМИЧЕСКАЯ ПАМЯТЬ: выделяем массив под показатели нагрузки
    double* cpuLoads = new double[serverCount];
    vector<string> alerts; // Список критических событий

    for (int i = 0; i < serverCount; i++) {
        cout << "Введите нагрузку для сервера #" << i + 1 << " (0-100%): ";
        cin >> cpuLoads[i];

        // Валидация через continue
        if (cpuLoads[i] < 0 || cpuLoads[i] > 100) {
            cout << "Некорректные данные. Повторите ввод." << endl;
            i--; 
            continue; 
        }

        // Логика фильтрации
        if (cpuLoads[i] > 80.0) {
            string msg = "ВНИМАНИЕ: Сервер " + to_string(i + 1) + " перегружен: " + to_string(cpuLoads[i]) + "%";
            alerts.push_back(msg);
        }
        
        // Экстренный выход (Break)
        if (cpuLoads[i] == 100.0) {
            alerts.push_back("КРИТИЧЕСКИЙ СБОЙ: Обнаружена 100% нагрузка. Анализ прерван.");
            serverCount = i + 1; // Корректируем размер для функции анализа
            break;
        }
    }

    // Использование функции с указателем
    double avg = calculateAverage(cpuLoads, serverCount);

    cout << "\n--- ОТЧЕТ МОНИТОРИНГА ---" << endl;
    cout << "Средняя нагрузка по системе: " << avg << "%" << endl;
    
    if (alerts.empty()) {
        cout << "Все системы работают в штатном режиме." << endl;
    } else {
        cout << "Обнаружено проблем: " << alerts.size() << endl;
        for (const string& note : alerts) {
            cout << "[LOG]: " << note << endl;
        }
    }

    // ОЧИСТКА ПАМЯТИ
    if (cpuLoads != nullptr) {
        delete[] cpuLoads;
        cpuLoads = nullptr;
        cout << "\n[Система]: Динамический массив удален из Кучи." << endl;
    }

    return 0;
}