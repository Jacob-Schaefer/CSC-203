#include <iostream>
#include <string>

double coffeeMoney(int);
double pastryMoney(int);
double totalPrice(double, double);

using namespace std;

int main()
{
    int coffeeSmall = 0;
    int coffeeMedium = 0;
    int coffeeLarge = 0;
    double coffeePrice = 0;
    double pastryPrice = 0;
    double priceTotal = 0;
    int userIn = 0;
    int muffinCount =0;
    int doughtnutCount =0;
    char coffeeQ ='y';
    char pastryQ ='y';

      cout << "Hello, would you like a coffee?(Y or N) :";
      cin >> coffeeQ;

    while (coffeeQ == 'Y' || coffeeQ == 'y'){


    cout << "What size would you like?" << endl;
    cout << "Options: 1 for Small, 2 for Medium, 3 for Large." << endl;
    cout << ":";
    cin >> userIn;
    if(userIn == 1)
        coffeeSmall++;
    else if(userIn == 2)
        coffeeMedium++;
    else if (userIn == 3)
        coffeeLarge++;
    else
       cout << "Invalid entry." << endl;

    coffeePrice += coffeeMoney(userIn);

    cout << "Would you like to order another.(Y or N) :";
    cin >> coffeeQ;
    }

    cout << "Would you like a pastry?(Y or N) :";
    cin >> pastryQ;

    while (pastryQ == 'y' || pastryQ == 'Y'){


        cout << "Options: 1 for muffin, 2 for doughnut." << endl;
        cout << ":";
        cin >> userIn;
        if(userIn == 1)
            muffinCount++;
        else if(userIn == 2)
            doughtnutCount++;
        else
          cout << "Invalid entry." << endl;

        pastryPrice += pastryMoney(userIn);

        cout << "Would you like to order another.(Y or N) :";
        cin >> pastryQ;

    }

    cout << "Thank you for your order!(Items being processed)" << endl;
    cout << endl;

    priceTotal = totalPrice(coffeePrice, pastryPrice);

    cout << "Your order is:" << endl;
    cout << endl;
    cout << "Small coffee's: " << coffeeSmall << endl;
    cout << "Medium coffee's: " << coffeeMedium << endl;
    cout << "Large coffee's: " << coffeeLarge << endl;
    cout << "Muffin's:" << muffinCount << endl;
    cout << "doughtnut's: " << doughtnutCount << endl;
    cout << endl;
    cout << "Total Price: $" << priceTotal << endl;

    return 0;
}

double coffeeMoney(int Num)
{
    double coffeeTotal = 0;
    double smallPrice = 1.59;
    double mediumPrice = 2.20;
    double largePrice = 4.35;


        if (Num == 1){
            cout << "A small coffee will be $1.59" << endl;
            coffeeTotal = smallPrice;

        }
        else if (Num == 2) {
            cout << "A medium coffee will be $2.20" << endl;
            coffeeTotal = mediumPrice;

        }
        else if (Num == 3){
            cout << "A Large coffee will be $4.35" << endl;
            coffeeTotal = largePrice;
        }

    return coffeeTotal;
} //end of coffeeMoney function

double pastryMoney(int Num)
{
    double pastryTotal = 0;
    double muffinPrice = 2.50;
    double doughtnutPrice = 3.00;

    if (Num == 1){
            cout << "A muffin will be $2.50" << endl;
            pastryTotal = muffinPrice;
        }
    else if (Num == 2){
            pastryTotal = doughtnutPrice;
            cout << "A muffin will be $3.00" << endl;
        }

   return pastryTotal;
} //end of pastryMoney function

double totalPrice (double Drink , double Food)
{
    double Total = 0;

    Total = Drink + Food;

    return Total;
}//end of totalPrice function
