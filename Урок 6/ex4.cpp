/* Задача 4: Магический предсказатель (switch/case)
Задание: Напиши программу, которая просит ввести число от 1 до 3 
и выдает случайное предсказание.

1 — "You will have a great day!"

2 — "You will find something lost."

3 — "A surprise is waiting for you."

Другие числа — "Try again later."*/




#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Pick a number (1-3) to see your future: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You will have a great day!" << endl;
            break;
        case 2:
            cout << "You will find something lost." << endl;
            break;
        case 3:
            cout << "A surprise is waiting for you." << endl;
            break;
        default:
            cout << "Try again later." << endl;
            break;
    }
    return 0;
}