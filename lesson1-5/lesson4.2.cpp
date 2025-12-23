#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    string svet = "желтый";

    if (svet == "зеленый") {
        cout << "можно ехать" << endl;
    } else if (svet == "желтый") {
        cout << "приготовься" << endl;
    } else {
        cout << "стой" << endl;
    }
    return 0;
}        