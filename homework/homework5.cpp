#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    /* 1. Задача */
    
    int n;
    cout << " введите число: ";
    cin >> n;
    for (int i = n; i >= 0; i--) {
        cout << i << " ... ";
    }

    cout << endl << " поехали!" << endl;
    
    /* 2. Задача */
    
    int target = 1000;
    int sum = 0;
    int money;

    while (sum < target) {
        cout << " сколько добавим в копилку? ";
        cin >> money;
        sum += money;
    }

    cout << "мы накопили! " << sum << "!" << endl;
    
    /* 3. Задача */
    
    int password;
    int secret = 1234;

    do {
        cout << " введите пароль: ";
        cin >> password;
    } while (password != secret);

    cout << " доступ разрешен! "<< endl;
    
    /* 4. Задача */
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
    
    /* 5. Задача */
    
    for (int i = 1; i <= 20; i++) {
        if (i == 19)
            break;

        if (i % 3 == 0)
            continue;

        cout << i << " ";
    }
    
    return 0;
}