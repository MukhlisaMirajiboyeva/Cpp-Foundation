#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    cout << "The sum of " << a << " and " << b << " is " << a+b << endl;

    int c;
    int d;
    cout << "Enter two integers: ";
    cin >> c >> d;
    int dev = c / d;
    cout << "The division of " << c << " by " << d << " is " << dev ;
    return 0;
}
