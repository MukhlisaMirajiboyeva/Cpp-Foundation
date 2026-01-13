#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

double calculateAverage (const double* data, int size) {
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
    for (int i = 0; i < serverCount; i++)
    {
        double loads;
        cout << " начало цикла, введите количество: " << i+1;
        cin >> loads;
        if (loads<0)
        {
            cout << " не то значение " << i--;
            continue;
        }
        cpuLoads[i] = loads;

        if (loads>=100)
        {
            alerts.push_back(" сбой, прекращение сбора данных"+to_string(i+1));
            break;
        }
    }

    for (int i = 0; i < serverCount; i++) {
        if (*(cpuLoads+i)>80)
        {
            alerts.push_back(" превышение нормы ");
        }
    }

    cout << " запись истории ";
    for (int i = 0; i < alerts.size(); i++)
    {
        cout << alerts[i] << endl;
    }

    delete[] cpuLoads;
    cpuLoads = nullptr;

    return 0;
}