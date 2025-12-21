#include <iostream>
#include <clocale>
using namespace std;

int main() {
      setlocale (LC_ALL, "ru_RU.UTF-8");
    int score = 75; 

    if (score >= 90) {
        cout << "Ваша оценка: 5 ." << endl;
    } else if (score >= 70) {
        cout << "Ваша оценка: 4 ." << endl;
    } else if (score >= 50) {
        cout << "Ваша оценка: 3 ." << endl;
    } else {
        cout << "Ваша оценка: 2 ." << endl;
    }

    return 0;
}
