#include <iostream>
using namespace std;

int main ()
{
    int c; // "c" will be used for setting action
    double a1, a2; // a1 - first numer, a2 second number
    double sum, razn, pow, div; //results of operations
    cout << "First calculator!!!\n";
    begin: // cykling programm from this point
    cout << "Choose action.\n Enter 1 for +\n Enter 2 for -\n Enter 3 for *,\n Enter 4 for / \n";
    cin >> c;
    if ((c<1) || (c>4)) { // In case when user select wrong action programm will start from beginning with info message
            cout << "Entered wrong action! \n";
            goto begin;
    }
    cout << "Enter first number.\n";
    cin >> a1;
    cout << "Eenter second number.\n";
    cin >> a2;
    if (c == 1) {
            sum = a1 + a2;
            cout << "Sum is " << sum << "\n";
    } else if (c == 2) {
            razn = a1 - a2;
            cout << "Difference is " << razn << "\n";
    } else if (c == 3) {
            pow = a1 * a2;
            cout << "Product is " << pow << "\n";
    } else if (c == 4) {
            div = a1 / a2;
            cout << "Quotient is " << div << "\n";
    }
    goto begin;
    return 0;
}
