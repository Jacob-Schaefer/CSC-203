#include <iostream>

using namespace std;

int main()
{
    int curRead = 0;
    int preRead = 0;
    int finalRead = 0;
    const int Water = 7;
    const double minCharge = 16.67;
    double galPerThou = 0;
    double Charge = 0;

    cout << "Please enter the current meter readings:";
    cin >> curRead;
    cout << endl;
    cout << "Please enter the past meter readings: ";
    cin >> preRead;
    cout << endl;
    finalRead = curRead - preRead;
    galPerThou = finalRead / 1000;
    Charge = (galPerThou * 7) + minCharge;
    cout << "Calculating final gallon and charge amounts." << endl;
    cout << "The final gallon amount is: " << finalRead;
    cout << " and the final charge is: " << Charge;
    return 0;
}
