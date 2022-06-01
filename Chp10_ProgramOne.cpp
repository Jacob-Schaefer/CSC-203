#include <iostream>

void Standard(double);
void Plus(double);
void Premium(double);

using namespace std;

int main()
{
    int usrMem = 0;
    double usrDollar = 0;
    int usrLoop = 0;

    cout << "Welcome to the membership reward points page!" << endl;

    do
    {
        cout << "Please enter your membership type" <<endl;
        cout << "(1 for Standard, 2 for Plus, 3 for Premium): ";
        cin >> usrMem;
        cout << "" << endl;
        cout << "Enter monthly shopping total: ";
        cin >> usrDollar;
        cout << "" << endl;
        if(usrMem == 1)
        {
          Standard(usrDollar);
        }
        else if(usrMem == 2)
        {
            Plus(usrDollar);
        }
        else if(usrMem == 3)
        {
            Premium(usrDollar);
        }
        else
            cout <<"invalid entry" << endl;

        cout << "Would you like to enter something else?" << endl;
        cout << "(1 for yes, 2 for no): ";
        cin >> usrLoop;
    }while(usrLoop == 1);

    cout << "" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}

void Standard(double Dollar)
{
    int Points = 0;
    if (Dollar <= 75)
    {
      Points = Dollar * 0.05;
    }
    else if(Dollar <=149.99 && Dollar > 75)
    {
        Points = Dollar * 0.075;

    }
    else if(Dollar > 150)
    {
        Points = Dollar * 0.1;
    }
    else
        cout << "Invalid entry" << endl;

    cout << "Your rewards points for this month are: "<< Points << endl;
}

void Plus(double Dollar)
{
    int Points = 0;
    if (Dollar < 150)
    {
      Points = Dollar * 0.06;
    }
    else if(Dollar >= 150)
    {
        Points = Dollar * 0.13;
    }
    else
        cout << "Invalid entry" << endl;

    cout << "Your rewards points for this month are: "<< Points << endl;
}


void Premium(double Dollar)
{
    int Points = 0;
    if (Dollar < 200)
    {
      Points = Dollar * 0.04;
    }
    else if(Dollar >= 200)
    {
        Points = Dollar * 0.15;
    }
    else
        cout << "Invalid entry" << endl;

    cout << "Your rewards points for this month are: "<< Points << endl;
}
