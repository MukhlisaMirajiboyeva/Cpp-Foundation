#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

double calculateAverage (const double* data, int size) {
    if (size <= 0) return 0;
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
    int actualDataCount = 0;
    for (int i = 0; i < serverCount; i++)
    {
        double loads;
        cout << "Сервер #" << i + 1 << " - Введите нагрузку (%): ";
        cin >> loads;
        if (loads<0)
        {
            cout << " не то значение ";
            i--;
            continue;
        }
        cpuLoads[i] = loads;
        actualDataCount++;

        if (loads>=100)
        {
            alerts.push_back(" сбой, прекращение сбора данных "+ to_string(i+1) + " cервер перегружен на 100%");
            break;
        }
    }

    double averageLoad = calculateAverage (cpuLoads, actualDataCount);
    for (int i = 0; i < actualDataCount; i++) {
        if (*(cpuLoads + i) > 80)
        {
            alerts.push_back("ПРЕДУПРЕЖДЕНИЕ: Высокая нагрузка на сервере #" + to_string(i + 1) + " (" + to_string((int)cpuLoads[i]) + "%)");
        }
    }

    cout << " запись истории ";
    for (int i = 0; i < alerts.size(); i++)
    {
        cout << alerts[i] << endl;
    }

    if (cpuLoads != nullptr) {
        delete[] cpuLoads;
        cpuLoads = nullptr;
    }

    return 0;
}