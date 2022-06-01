#include <iostream>

using namespace std;

int main()
{
    int numPeople = 0;
    const int fourPlus = 100;
    const int threeLess = 150;
    const int tenPlus = 90;
    double Ave = 0;
    double Total = 0;
    char usrIn = 'n';
    int usrNum = 0;
    int numComp = 0;

    cout << "Hi would you like to register a company.(Y or N)" << endl;
    cin >> usrIn;
    if(usrIn == 'y' || usrIn == 'Y')
    {
        do
        {
            numComp++;
            cout << "How many people are you wanting to register." << endl;
            cin >> usrNum;
            if (usrNum <= 3 && usrNum > 0)
            {
                numPeople = numPeople += usrNum;
                Total = Total += (usrNum * threeLess);
                cout << "You will be charge $150 for, " << usrIn;
                cout << "people." << endl;
            }
            else if (usrNum <= 9 && usrNum > 3)
            {
                numPeople = numPeople += usrNum;
                Total = Total += (usrNum * fourPlus);
                cout << "You will be charge $100 for, " << usrIn;
                cout << "people." << endl;

            }
            else if (usrNum > 10)
            {
                numPeople = numPeople += usrNum;
                Total = Total += (usrNum * tenPlus);
                cout << "You will be charge $90 for, " << usrIn;
                cout << "people." << endl;

            }
            else
            {
                cout << "Invalid entry." << endl;
            }

            cout << "Would you like to enter another Company.(Y or N)" << endl;
            cin >> usrIn;
        }
        while(usrIn == 'y' || usrIn == 'Y');
    }
    else
        cout << "Okay, Have a nice day." << endl;

    cout << "Calculating totals." << endl;
    Ave = Total/numPeople;
    cout << "" << endl;
    cout << "The total number of people registered is, " << numPeople << endl;
    cout << "The total charge is, " << Total << endl;
    cout << "The Average per person is, " << Ave << endl;

    return 0;
}
