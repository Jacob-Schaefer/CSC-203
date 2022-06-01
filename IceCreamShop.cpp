#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double getconeCost(int, int);
double getsundaeCost(int, int);
double getblizzardCost(int, int);
double getTotalCost(double, double, double);

int main()
{
    int usrIn = 0;
    int usrIn2 =0;
    char usrLoop = 'y';
    int coneVanilla = 0;
    int coneChocolate = 0;
    int coneTwist = 0;
    int sundaeChocolate = 0;
    int sundaeCaramel = 0;
    int sundaeStrawberry = 0;
    int blizzardSmall = 0;
    int blizzardMedium = 0;
    int blizzardLarge = 0;
    double totalCost = 0;
    double coneCost = 0;
    double sundaeCost = 0;
    double blizzardCost = 0;

    cout << "Welcome to the Ice Cream Shop!" << endl;
    cout << "Can I take your order" << endl;
    cout << "" << endl;

    cout << "Would you like to order a Cone, Sundae or Blizzard?" << endl;
    cout << "(Press 1 for Cone, 2 for Sundae, 3 for blizzard):";
    cin >> usrIn;

    do
    {
        if (usrIn == 1)
        {
            do
            {
                cout << "What size of cone would you like?" << endl;
                cout << "(1 for small, 2 for medium, 3 for large):";
                cin >> usrIn;
                cout << "" << endl;
                cout << "How many:";
                cin >> usrIn2;
                coneCost += getconeCost(usrIn, usrIn2);
                cout << "What flavor would you like?" << endl;
                cout << "(1 for vanilla, 2 for chocolate, 3 for twist):";
                cin >> usrIn;
                if(usrIn == 1)
                    coneVanilla+=usrIn2;
                else if(usrIn == 2)
                    coneChocolate+=usrIn2;
                else if(usrIn == 3)
                    coneTwist+=usrIn2;
                else
                    cout << "Invalid entry."<< endl;

                cout << "Would you like to order another cone(Y or N)? :";
                cin >> usrLoop;
            }while(usrLoop == 'y' || usrLoop == 'Y');
        }
        else if(usrIn ==2)
        {
             do
            {
                cout << "What sundae would you like" << endl;
                cout << "(1 for chocolate, 2 for caramel, 3 for starwberry):";
                cin >> usrIn;
                cout << "" << endl;
                cout << "How many:";
                cin >> usrIn2;
                sundaeCost += getsundaeCost(usrIn, usrIn2);
                if(usrIn == 1)
                    sundaeChocolate+=usrIn2;
                else if(usrIn == 2)
                    sundaeCaramel+=usrIn2;
                else if(usrIn == 3)
                    sundaeStrawberry+=usrIn2;
                else
                    cout << "Invalid entry."<< endl;

                cout << "Would you like to order another sundae(Y or N)? :";
                cin >> usrLoop;
            }while(usrLoop == 'y' || usrLoop == 'Y');

        }
        else if(usrIn == 3)
        {
            do
            {
                cout << "What size of Blizzard would you like?" << endl;
                cout << "(1 for small, 2 for medium, 3 for large):";
                cin >> usrIn;
                cout << "" << endl;
                cout << "How many:";
                cin >> usrIn2;
                blizzardCost += getblizzardCost(usrIn, usrIn2);
                if(usrIn == 1)
                    blizzardSmall+=usrIn2;
                else if(usrIn == 2)
                    blizzardMedium+=usrIn2;
                else if(usrIn == 3)
                    blizzardLarge+=usrIn2;
                else
                    cout << "Invalid entry."<< endl;

                cout << "Would you like to order another Blizzard(Y or N)? :";
                cin >> usrLoop;
            }while(usrLoop == 'y' || usrLoop == 'Y');
        }
        else
        {
            cout << "Invalid entry" << endl;
        }

        cout << "Would you like to order something else." << endl;
        cout << "(Y or N)" << endl;
        cin >> usrLoop;
        if (usrLoop == 'y' || usrLoop == 'Y')
        {
            cout << "(1 for Cone, 2 for Sundae, 3 for Blizzard)" << endl;
            cin >> usrIn;
        }
    }while (usrLoop == 'Y' || usrLoop == 'y');

    cout << "Calculating Total..." << endl;

    totalCost += getTotalCost(coneCost,sundaeCost,blizzardCost);

    cout << "" << endl;

    cout << "Printing receipt..." << endl;
    cout << "" << endl;

    cout << "Cone's:" << endl;
    cout << "Vanilla: " << coneVanilla << " --Chocolate: " << coneChocolate << " --Twist: " << coneTwist << endl;
    cout << "Sundae's:" << endl;
    cout << "Chocolate: " << sundaeChocolate << " --Caramel: " << sundaeCaramel << " --Strawberry: " << sundaeStrawberry << endl;
    cout << "Blizzard's: " << endl;
    cout << "Small: " << blizzardSmall << " --Medium: " << blizzardMedium << " --Large: " << blizzardLarge << endl;
    cout << "" << endl;
    cout << fixed << setprecision(2);
    cout << "Total: $" << totalCost << endl;

    return 0;
}

double getconeCost(int cone,int num)
{
    double smallCost = 1.50;
    double mediumCost = 2.00;
    double largeCost = 2.25;
    double Cost = 0;
    enum coneSize {small=1,medium,large};
    if (coneSize(cone) == small)
    {
        Cost = smallCost * num;
    }
    else  if (coneSize(cone) == medium)
    {
        Cost = mediumCost * num;
    }
    else  if (coneSize(cone) == large)
    {
        Cost = largeCost * num;
    }
    else
    {
        cout << "Invalid entry";
    }
    return Cost;
}

double getsundaeCost(int flavor,int num)
{
    double choCost = 2.75;
    double carCost = 2.99;
    double strawCost = 3.25;
    double cost = 0;
    enum Sundae {chocolate=1,caramel,strawberry};
    if (Sundae(flavor) == chocolate)
    {
        cost= choCost * num;
    }
    else  if (Sundae(flavor) == caramel)
    {
        cost= carCost * num;
    }
    else  if (Sundae(flavor) == strawberry)
    {
        cost= strawCost * num;
    }
    else
    {
        cout << "Invalid entry";
    }
    return cost;
}

double getblizzardCost(int blizzard, int num)
{
    double smallCost = 3.00;
    double mediumCost = 3.49;
    double largeCost = 3.99;
    double cost = 0;
    enum Blizzard {small =1,medium,large};
    if (Blizzard(blizzard) == small)
    {
        cost= smallCost * num;
    }
    else  if (Blizzard(blizzard) == medium)
    {
        cost= mediumCost * num;
    }
    else  if (Blizzard(blizzard) == large)
    {
        cost= largeCost * num;
    }
    else
    {
        cout << "Invalid entry";
    }
    return cost;
}

double getTotalCost(double cone, double sundae, double blizzard)
{
    double Total = 0;

    Total = cone + sundae + blizzard;

    Total += Total * 0.05;

    return Total;
}



