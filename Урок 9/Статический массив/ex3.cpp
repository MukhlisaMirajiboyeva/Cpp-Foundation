#include <iostream>
using namespace std;

int main() {
    int a[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int search;
    bool found = false; // "Флаг", который скажет нам, нашли мы число или нет

    cout << "Введите число для поиска: ";
    cin >> search;

    for (int i = 0; i < 8; i++) {
        if (a[i] == search) { // Сравниваем текущий элемент с искомым
            found = true;    // Ура, нашли!
            break;           // Выходим из цикла досрочно
        }
    }

    if (found) {
        cout << "Найдено" << endl;
    } else {
        cout << "Нет" << endl;
    }

    return 0;
}