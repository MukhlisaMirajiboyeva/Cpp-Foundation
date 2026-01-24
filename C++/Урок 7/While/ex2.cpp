#include <iostream>
using namespace std;

int main() {
    int cookiesInBox = 5; // В начале у нас 5 печенек

    // ПОКА печенек больше нуля...
    while (cookiesInBox > 0) {
        cout << "Eating a cookie... Yum! Cookies left: " << cookiesInBox - 1 << endl;
        
        // Уменьшаем количество печенек
        cookiesInBox--; 
    }

    cout << "Oh no! The box is empty." << endl;
    return 0;
}