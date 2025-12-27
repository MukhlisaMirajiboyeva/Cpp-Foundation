#include <iostream>
#include <clocale>
using namespace std;

int main() {
     setlocale (LC_ALL, "ru_RU.UTF-8");
    int height;
    bool hasTicket;

    cout << "Введите рост (141см): ";
    cin >> height;

    cout << "Есть билет? (1): ";
    cin >> hasTicket;

    if (height >= 140 && hasTicket) {
        cout << "Welcome to the ride!" << endl;
    } else {
        cout << "Sorry, you can't go." << endl;
    }

    return 0;
}