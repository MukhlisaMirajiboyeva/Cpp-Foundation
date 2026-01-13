#include <iostream>
#include <vector>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector<int> v;

    for (int i = 1; i <= 100; i++) {
        v.push_back(i);
        // Выводим текущее кол-во элементов и зарезервированную память
        std::cout << "Элементов (size): " << v.size() 
                  << " | Емкость (capacity): " << v.capacity() << std::endl;
    }
    
    return 0;
}