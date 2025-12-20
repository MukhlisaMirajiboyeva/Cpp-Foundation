#include <iostream>
#include <string>
using namespace std;
int main(){

    int temperature = 26;
    bool isEcoMode = true;
    
    if ( temperature > 25, !isEcoMode){
        cout << " AC is ON" << endl;
    } else {
        cout << " AC is OFF" << endl;
    }
    return 0;
}