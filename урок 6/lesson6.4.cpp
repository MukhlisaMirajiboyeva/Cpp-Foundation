#include <iostream>
using namespace std;

int main(){
    int score;
    int extraTasks;

    cout << " enter your score (1 - 100 ):";
    cin >> score;
    cout << "enter your extraTasks:" ;

    if ( score > 90 || ( score > 80 && extraTasks )) {
        cout << " Grade A" << endl;
    } else {
        cout << "Keep studying" << endl;
    }
    return 0;

}