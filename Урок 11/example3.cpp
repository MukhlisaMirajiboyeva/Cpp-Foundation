#include <iostream>
#include <windows.h>
using namespace std;

// Функция-строитель.
// Она принимает НЕ копию дома, а АДРЕС (int* address)
void makeRepair(int* address) {
    // Оператор * значит: "Пойди по этому адресу и измени то, что внутри"
    *address = 100; // Было 5, стало 100 (стены покрашены)
}

int main() {
    SetConsoleOutputCP(65001);
    int house = 5; // Наш дом, внутри число 5 (стены старые)
    
    cout << "До ремонта в доме: " << house << endl;

    // Мы вызываем строителей и даем им АДРЕС дома (&house)
    // Если бы мы просто написали makeRepair(house), они бы покрасили копию!
    makeRepair(&house);

    cout << "После ремонта в доме: " << house << endl;

    return 0;
}