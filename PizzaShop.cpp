#include <iostream>

double drinkPrice(int, int);
double foodPrice(int, int);

using namespace std;

int main()
{
   int usrIn = 0;
   int usrNum = 0;
   char usrLoop = 'n';
   double drinkTotal = 0;
   double foodTotal = 0;
   double subTotal = 0;
   double Total = 0;


    cout << "Would you like to order a Pizza(Y or N)" << endl;
    cin >> usrLoop;
    if(usrLoop == 'n' || usrLoop == 'N')
    {
        cout << "Okay have a nice day!" << endl;
        exit;
    }
    while(usrLoop == 'Y' || usrLoop == 'y')
    {
        cout << "Would you like a 1)Small 2) Medium or 3) Large pizza" << endl;
        cout << "Please enter 1, 2, or 3" << endl;
        cin >> usrIn;
        cout << "How many." << endl;
        cin >> usrNum;
        foodTotal += foodPrice(usrIn, usrNum);
        cout << "Would you like to order another Pizza.(Y or N)" << endl;
        cin >> usrLoop;
    }
    cout << "Would you like to order a drink(Y or N)" << endl;
    cin >> usrLoop;
    while(usrLoop == 'y' || usrLoop == 'Y')
    {
      cout << "Would you like a 1)Small 2) Medium or 3) Large drink" << endl;
        cout << "Please enter 1, 2, or 3" << endl;
        cin >> usrIn;
        cout << "How many." << endl;
        cin >> usrNum;
        drinkTotal += drinkPrice(usrIn, usrNum);
        cout << "Would you like to order another drink.(Y or N)" << endl;
        cin >> usrLoop;
    }

    cout << "Thank you for your order, calculating total." << endl;
    subTotal = drinkTotal + foodTotal;
    cout << "As a gift, there is no sales tax." << endl;
    cout << "Your total is: $" << subTotal << endl;
    return 0;
}

double drinkPrice(int Drink, int Num)
{
    double totalCost = 0;
    double smallPrice = 1.50;
    double mediumPrice = 2.00;
    double largePrice = 3.25;

    if (Drink == 1)
    {
        totalCost = Num * smallPrice;
    }
    else if (Drink == 2)
    {
        totalCost = Num * mediumPrice;
    }
    else if (Drink == 3)
    {
        totalCost = Num * largePrice;
    }
    else
    {
        cout << "Invalid entry" << endl;
        exit;
    }

    return totalCost;
} //end of drinkPrice function

double foodPrice(int Pizza, int Num)
{
    double totalCost = 0;
    double smallPrice = 3.50;
    double mediumPrice = 5.45;
    double largePrice = 7.99;

    if (Pizza == 1)
    {
        totalCost = Num * smallPrice;
    }
    else if (Pizza == 2)
    {
        totalCost = Num * mediumPrice;
    }
    else if (Pizza == 3)
    {
        totalCost = Num * largePrice;
    }
    else
    {
        cout << "Invalid entry" << endl;
        exit;
    }

    return totalCost;
} //end of foodPrice function
