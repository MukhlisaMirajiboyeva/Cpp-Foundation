#include <iostream>
using namespace std;
#include <clocale>
int main() {
     setlocale (LC_ALL, "ru_RU.UTF-8");
    int number = 35;

    if (number > 0) {
        cout << "этот номер верно ." << endl;
    } else {
        cout << "этот номер не верно." << endl;
    }

    return 0;
}

