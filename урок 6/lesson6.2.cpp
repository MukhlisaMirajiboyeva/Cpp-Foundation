#include <iostream>
using namespace std;

int main(){
    bool isDoorOpen = true ;
    bool isDeactivated = false ;
    if ( isDoorOpen && !isDeactivated) {
        cout << "ALARM! Calling the police!" << endl;
    } else {
        cout << "Everything is fine." << endl;

    }
    return 0;
}