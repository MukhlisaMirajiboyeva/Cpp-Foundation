#include <iostream>
using namespace std;

int main() {
    bool isDoorOpen = true;
    bool isDeactivated = false;

    if ( isDoorOpen && !isDeactivated ) {
        cout << " ALARM! calling the police! " << endl;
    } else {
        cout << " everything is fine " << endl;
    }
    return 0;
}