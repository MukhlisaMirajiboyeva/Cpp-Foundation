#include <iostream>
#include <string>
using namespace std;

/* 1. задача */
    int main() {
    string text;
    cout << " введите предложение: ";
    getline(cin, text);
    cout << " длина строки: " << text.length() << endl;

    int pos = text.find(" школа ");
    if (pos!= string::npos) {
        cout << " слово \"школа\" найдено, индекс: " << pos << endl;
    } else {
        cout << " слово не найдено " << endl;
    }

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'а') {
            text[i] = '@';
        }
    }

    cout << " измененная строка: " << text << endl;
    cout << endl;

    /* 2. задача */
    int x, y;
    char op;

    cout << " введите два числа: ";
    cin >> x >> y;

    cout << " введите операцию (+, -, *): ";
    cin >> op;

    cout << " результат: " << calculate(x, y, op) << endl;
    cout << endl;

    /* бонус*/
    cin.ignore();
    string word;
    cout << " введите строку для разворота: ";
    getline(cin, word);

    cout << " развернутая строка: " << reverseString(word) << endl;

    return 0;
}