#include <iostream>
#include <string>
using namespace std;

int main(){
    int difficulty = 2;
    
    switch (difficulty){
        case '1':
              cout << " Easy mode selected " << endl;
              break;
        case '2':
              cout << "Normal mode selected " << endl;
              break;
        case '3':
              cout << " Hard mode selected " << endl;
              break;
        default:
              cout << "Unknown difficulty " << endl;     
              break;
    }

    return 0;
}