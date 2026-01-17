#include <iostream>
using namespace std;

// 1. Функция принимает два числа (ингредиенты) и возвращает целое число (int)
int sum(int a, int b) {
    int result = a + b; // Складываем
    return result;      // Возвращаем результат обратно
}

int main() {
    int x = 10;
    int y = 5;
    
    // 2. Вызываем функцию и сохраняем то, что она вернула, в переменную answer
    int answer = sum(x, y); 
    
    cout << "Сумма равна: " << answer << endl;
    
    // Можно вызвать функцию прямо внутри cout
    cout << "Сумма 20 и 30 равна: " << sum(20, 30) << endl;
    
    return 0;
}