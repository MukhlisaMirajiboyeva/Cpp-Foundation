#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    string result = "";

    for (int i = s.length() - 1; i >= 0; i--) {
        result += s[i];
    }

    return result;
}

int main() {
    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Строка наоборот: " << reverseString(text);

    return 0;
}