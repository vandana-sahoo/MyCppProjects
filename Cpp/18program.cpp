// program to find quotient and remainder 

#include <iostream>
using namespace std;

int main ()
{
    int divisor,dividend,quotient,remainder;

    cout << "enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;

}