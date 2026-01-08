#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    /* 1. задача */
    int a[8] = {2, 5, 7, 3, 4, 6, 1, 8};

    for (int i = 0; i < 4; i++) {
        int temp = a[i];
        a[i] = a[7 - i];
        a[7 - i] = temp;
    }
    cout << " развернутый массив: ";
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    }

    /* 2. задача */
    double temp[7] = {21.3, 24.1, 24.5, 24.7, 25.3, 26.1, 27.4};

    double sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += temp[i];
    }

    double average = sum / 7;
    int days = 0;

    for (int i = 0; i < 7; i++) {
        if (temp[i] > average) {
            days++;
        }
    }

    cout << " средняя температура: " << average << endl;
    cout << " дней выше средней: " << days << endl;
    
    /* 3. задача */
    vector <int> numbers;
    int x;

    cout << " вводите числа (0 — конец): ";
    while (true) {
        cin >> x;
        if (x == 0)
            break;
        numbers.push_back(x);
    }

    vector<int> filtered;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] >= 0) {
            filtered.push_back(numbers[i]);
        }
    }

    cout << " результат: ";
    for (int i = 0; i < filtered.size(); i++) {
        cout << filtered[i] << " ";
    }

    cout << endl;
    cout << " размер: " << filtered.size() << endl;

    /* 4. задача */
    vector<string> queue = {" олег ", " иван ", " анна ", " мария "};
    vector<string> newQueue;
    newQueue.push_back(" борис ");

    for (int i = 0; i < queue.size(); i++) {
        if (queue[i] != " иван ") {
            newQueue.push_back(queue[i]);
        }
    }

    newQueue.push_back( " елена ");

    cout << " очередь: ";
    for (int i = 0; i < newQueue.size(); i++) {
        cout << newQueue[i];
        if (i != newQueue.size() - 1)
            cout << ",";
    }
    return 0;
}