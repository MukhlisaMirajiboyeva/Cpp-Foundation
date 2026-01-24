#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    // Массив указателей на неизменяемые строки
    const char* names[] = {"Yan", "Alexander", "Li"};

    // 1. ЭТО МОЖНО: Читать данные
    cout << "Имя номер 0: " << names[0] << endl;

    // 2. ЭТО МОЖНО: Перенаправить указатель на другое слово
    names[0] = "Ivan"; 
    cout << "Новое имя номер 0: " << names[0] << endl;

    // 3. ЭТО НЕЛЬЗЯ (вызовет ошибку компиляции):
    // Попытаемся изменить первую букву в слове "Alexander" на 'O'
    // names[1][0] = 'O'; // ОШИБКА! Текст защищен словом const

    return 0;
}