#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

double getBalance(int, double, int);

int main()
{
    int Deposit = 0;
    double interestRate = 0;
    double acctBalance = 0;
    int usrIn = 0;

    cout << "Deposit:";
    cin >> Deposit;
    cout << "Rate (in decimal form):";
    cin >> interestRate;
    cout << "How many years would you like deposit to be held: ";
    cin >> usrIn;

    cout << "" << endl;

    cout << fixed << setprecision(2);
    for (int year =1;year<=usrIn;year++)
    {
        acctBalance=getBalance(Deposit, interestRate,year);
        cout << "Year " << year << ": $" << acctBalance << endl;
    }
    return 0;
}

double getBalance(int amount, double rate, int y)
{
    double Balance = 0;
    Balance = amount * pow((1 + rate), y);
    return Balance;
} //end of getBalance function
