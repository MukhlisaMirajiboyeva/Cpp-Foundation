#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main () {
    SetConsoleOutputCP (CP_UTF8);

    bool hasbike = false ;   //веловипеда нет (false)
    bool hasconsole = true ;  //приставка есть (true)
    cout << "какой подарок ты получил?" << endl;
    cout << " введите значение hasbike ( 1- получил велосипед, 0 - не получил )";
    cin >> hasbike;
    cout << "введите значение hasconsole ( 1 - получил приставку, 0 - не получил )";
    cin >> hasconsole ;

    if (hasbike || hasconsole) {
        cout << "ура! ты получил подарок!" << endl;   
    } else {
        cout << " надо было лучше себя вести " << endl;
    }
    return 0;
}   