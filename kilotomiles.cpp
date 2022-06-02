
#include <iostream>
using namespace std;

int main()
{
    const double miConversion= 0.621;
    double km = 0;
    cout << "The number of kilometers traveled: ";
    cin >> km;
    double miles = km * miConversion;
    cout << "The number of miles traveled: " << miles;
}


