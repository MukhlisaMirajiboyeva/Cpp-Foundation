#include <iostream>
#include <vector>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::vector <int> v;
    int num;
    std::cout << " введите 5 чисел: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> num;
        if (num % 2 == 0)
        {
            v.insert(v.begin(), num);
        } else {
            v.push_back(num);
        }
        
    }
    
}