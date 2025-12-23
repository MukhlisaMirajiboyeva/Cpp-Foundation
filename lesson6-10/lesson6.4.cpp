#include <iostream>
using namespace std;

int main() {
    int score;
    int extraTasks;

    cout << " enter your score ( 0-100 )" << endl;
    cin >> score;
    cout << " enter your extraTasks " << endl;
    cin >> extraTasks;
    if ( score > 90 || ( score > 80 && extraTasks > 0 ) ) 
    {
        cout << " grade: A " << endl;
    } else {
        cout << " keep studying " << endl;
    }
    
    return 0;
}
