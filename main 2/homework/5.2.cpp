#include <iostream>
using namespace std;

int main() {
    int target = 1000;
    int sum = 0;
    int deposit;

    while (sum < target) {
        cin >> deposit;
        sum += deposit;
    }

    cout << "Ура! Мы накопили " << sum << "!" << endl;

    return 0;
}