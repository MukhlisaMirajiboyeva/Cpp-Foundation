#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);
    std::string username ;
    std::string userage ;
    bool hascat ;

    cout << "введите свое имя" << endl;
    cin >> username ;
    cout << "введите свой возраст" << endl;
    cin >> userage ;
    cout << "есть ли у вас кот" << endl;
    cin >> hascat ;
    return 0;
    
    
    
}