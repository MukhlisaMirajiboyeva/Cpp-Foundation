#include <iostream>
using namespace std;

int main (){
    int choice;
    cout << "Choose number from 1 to 3" ;
    cin >> choice;

    switch (choice) {
        case 1 :
             cout << "You will have a great day!" << endl;
             break;
        case 2:
             cout << " You will find something lost." << endl;
             break;
        case 3:
             cout << "A surprise is waiting for you." << endl;
             break;    
         default: 
             cout << " Try again latter." << endl;
             break;
    }
    return 0;
}