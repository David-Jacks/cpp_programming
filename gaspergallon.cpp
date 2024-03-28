#include <iostream>

int main()
{
    int no_of_gallons, no_of_miles;
    double ans;
    cout << "please input the number of gallons";

    cin >> no_of_gallons;

    cout << "please input the number of miles";
    cin >> no_of_miles;

    // process by dividing miles by gallon
    ans = no_of_miles / no_of_gallons;

    // print out answer
    cout << fixed << showpoint << setprecision(2);
    cout << "The miles per gallon is " << ans;
    return (0);
}