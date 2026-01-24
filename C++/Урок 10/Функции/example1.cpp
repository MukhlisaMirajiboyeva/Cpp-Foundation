#include <iostream>
using namespace std;

// 1. Создаем функцию (наш рецепт)
void sayHello() {
    cout << "Привет, программист!" << endl;
}

// 2. Главная функция main (точка входа)
int main() {
    cout << "Начало программы..." << endl;
    
    sayHello(); // 3. Вызываем нашу функцию
    sayHello(); // 4. Можем вызвать её второй раз!
    
    cout << "Конец программы." << endl;
    return 0;
}