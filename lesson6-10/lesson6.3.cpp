#include <iostream>
using namespace std;


int main() {
    int choice;

    cout << " select difficulty (1 and more...) ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << " you will have a great day " << endl;
            break;
        case 2:
            cout << " you will found something lost " << endl;
            break;
        case 3:
            cout << " a surprice is waiting for you " << endl;
            break;
        default:
            cout << " try again later " << endl;
    }
    
    return 0;
}