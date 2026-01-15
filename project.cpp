#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

double calculateAverage (const double* data, int size) {
    if (size <= 0) return 0; // Защита от деления на ноль
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(data + i);
    }
    return sum/size;
}

int main() {
    SetConsoleOutputCP (65001);
    srand(time(0));

    int serverCount;
    double* cpuLoads = nullptr;
    vector<string> alerts;
    cout << " какое количество серверов? ";
    cin >> serverCount;

    cpuLoads = new double[serverCount];
    int actualDataCount = 0; // Переменная для учета реально введенных данных
    for (int i = 0; i < serverCount; i++)
    {
        double loads;
        cout << "Сервер #" << i + 1 << " - Введите нагрузку (%): ";
        cin >> loads;
        if (loads<0)
        {
            cout << " не то значение " <<;
            i--;
            continue;
        }
        cpuLoads[i] = loads;
        actualDataCount++; // Увеличиваем счетчик успешно записанных серверов

        if (loads>=100)
        {
            alerts.push_back(" сбой, прекращение сбора данных"+ to_string(i+1) + "Сервер перегружен на 100%");
            break;
        }
    }
// --- ИСПРАВЛЕНИЕ: Вызов функции расчета (Шаг 5) ---

    
    // Шаг 5: Анализ через арифметику указателей
    for (int i = 0; i < actualDataCount; i++) {
        if (*(cpuLoads + i) > 80) // Использование *(ptr + i)
        {
            alerts.push_back(" превышение нормы ");
        }
    }


    // Шаг 6: Вывод истории из Vector исправить
    cout << " запись истории ";
    for (int i = 0; i < alerts.size(); i++)
    {
        cout << alerts[i] << endl;
    }

    // Шаг 7: Завершение и уборка
    if (cpuLoads != nullptr) {
        delete[] cpuLoads; // Освобождение памяти
        cpuLoads = nullptr; // Зануление
    }

    return 0;
}
