#include <iostream>
using namespace std;

int main() {
    /* 1.задача */
    int height;
    bool hasTicket;

    cout << " enter your height (cm): ";
    cin >> height;

    cout << " do you have a ticket? (1 - yes, 0 - no): ";
    cin >> hasTicket;

    if (height >= 140 && hasTicket) {
        cout << " welcome to the ride!" << endl;
    } else {
        cout << " sorry, you can't go." << endl;
    }
    
    /* 2. задача */
    
    int age;
    bool isSunday;

    cout << " enter your age: ";
    cin >> age;

    cout << " is today Sunday? (1 - yes, 0 - no): ";
    cin >> isSunday;

    if (age < 7 || isSunday) {
        cout << " free entry!" << endl;
    } else {
        cout << " you need to buy a ticket." << endl;
    }
    /* 3. задача */
    
    int temperature;
    bool isEcoMode;

    cout << " enter temperature: ";
    cin >> temperature;

    cout << " is Eco Mode ON? (1 - yes, 0 - no): ";
    cin >> isEcoMode;

    if (temperature >25 && !isEcoMode) {
        cout << " AC is ON " << endl;
    } else {
        cout << " AC is OFF " << endl;
    }
    /* 4. задача */
    
    int difficulty;

    cout << " select difficulty (1 - easy, 2 - normal, 3 - hard): ";
    cin >> difficulty;

    switch (difficulty) {
        case 1:
            cout << " easy mode selected " << endl;
            break;
        case 2:
            cout << " normal mode selected " << endl;
            break;
        case 3:
            cout << " hard mode selected " << endl;
            break;
        default:
            cout << " unknown difficulty " << endl;
    }

    return 0;
}