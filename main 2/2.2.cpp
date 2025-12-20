#include <iostream>
using namespace std;

int main() {
    int score = 75;

    if (score >= 90) {
        cout << "Your grade is A (Excellent)." << endl;
    } else if (score >= 70) {
        cout << "Your grade is B (Good)." << endl;
    } else if (score >= 50) {
        cout << "Your grade is C (Satisfactory)." << endl;
    } else {
        cout << "Your grade is F (Fail)." << endl;
    }

    return 0;
} 