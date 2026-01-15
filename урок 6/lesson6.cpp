#include <iostream>
#include <string>

using namespace std;

int main(){

    double height;
    bool hasTicket;
    cout << "Enter your hight (cm):";
    cin >> height;

    cout << "Do you have a ticket?( 1- yes, 0- no):" << endl;
    cin >> hasTicket;

    if (height >=150 && hasTicket){
        cout << "Enjoy the ride!"<< endl;
    } else {
        cout << "Access denied!";
    }
    return 0;
}