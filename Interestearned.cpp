#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // dealing with input 
    double prin_pal, final_balance, rate, interest;
    int T;

    cout << "please input your principal";
    cin >> prin_pal;
    cout << "please input your rate";
    cin >> rate;
    cout << "please input the number of times the interest was compounded"
    cin >> T;

    // processing formular
    final_balance = prin_pal * pow((1 + rate / T), T);
    interest = final_balance - prin_pal;

    // dealing with outputs
    cout << "interest rate: " << setwith(20) << rate;
    cout << "Times compounded: " << setwith(20) << T;
    count << "Principal: " << setwith(20) << prin_pal;
    cout << "Interest: " << setwith(20) << interest;
    cout << "final balance: " << setwith(20) << final_balance;
    return (0);
}