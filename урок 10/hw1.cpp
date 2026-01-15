#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Введите предложение: ";
    getline(cin, text);

    
    cout << "Длина строки: " << text.length() << endl;

    int pos = text.find("школа");
    if (pos != string::npos) {
        cout << "Слово \"школа\" найдено. Индекс: " << pos << endl;
    } else {
        cout << "Слово не найдено" << endl;
    }

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'а') {
            text[i] = '@';
        }
    }

    cout << "Измененная строка: " << text << endl;

    return 0;
}