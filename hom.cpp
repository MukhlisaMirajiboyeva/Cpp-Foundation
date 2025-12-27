#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    
    int age;
    cout << "Введите ваш возраст: ";
    cin >> age;
    cout << "Ваш возраст: " << age << endl;

    
    double height;
    cout << "Введите ваш рост (в метрах): ";
    cin >> height;
    cout << "Ваш рост: " << height << " м" << endl;

    
    int grade_num;
    char grade_letter;

    cout << "Введите номер класса: ";
    cin >> grade_num;
    cout << "Введите букву класса: ";
    cin >> grade_letter;

    cout << "Ваш класс: " << grade_num << grade_letter << endl;

    return 0;
}

int main() {
    int a = 20, b = 10;

    cout << "a=" << a << ", b=" << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}


int main() {
     setlocale (LC_ALL, "ru_RU.UTF-8");
    int height;
    bool hasTicket;

    cout << "Введите рост (141см): ";
    cin >> height;

    cout << "Есть билет? (1): ";
    cin >> hasTicket;

    if (height >= 140 && hasTicket) {
        cout << "Welcome to the ride!" << endl;
    } else {
        cout << "Sorry, you can't go." << endl;
    }

    return 0;
}





int main() {
     setlocale (LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите число: ";
    cin >> n;

    for (int i = n; i >= 0; i--) {
        cout << i << endl;
    }

    cout << "Поехали! " << endl;
    return 0;
}




int main() {
       setlocale (LC_ALL, "ru_RU.UTF-8");
    
    int target = 1000;
    int sum = 0;
    int add;

    while (sum < target) {
        cout << "Введите сумму: ";
        cin >> add;
        sum += add;
    }

    cout << "Ура! Мы накопили " << sum << "!" << endl;
    return 0;
}
