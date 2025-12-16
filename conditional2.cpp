#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    string svet = "жёлтый";

    if (svet == "зеленый") {
        cout << "Можно ехать!" << endl ;
    } else if (svet == "жёлтый") {
        cout << " Приготовься!" << endl;
    } else  { 
        cout << "Стой!" << endl ;
    }
    
    return 0;
}