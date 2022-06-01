#include <iostream>

using namespace std;

int main()
{
    int smallPizza = 0;
    int mediumPizza = 0;
    int largePizza = 0;
    int pizzaTotal = 0;
    double largePrice = 12.99;
    double mediumPrice = 9.99;
    double smallPrice = 5.99;
    double runTotal = 0;
    int usrInput = 0;
    char Choice = 'y';
    int Coupon = 0;
    double totalPrice = 0;
    int loop = 0;

    do{

            cout << "What size would you like?" << endl;
            cout << "Enter, 1 for a small, 2 for a medium, 3 for a large: ";
            cin >> Choice;
            cout << endl;
            cout << "How many would you like to order?:";
            cin >> usrInput;
            switch(Choice){
            case '1':
                cout << "You have ordered a small pizza." << endl;
                smallPizza = usrInput;
                break;
            case '2':
                cout << "You have ordered a medium pizza." << endl;
                mediumPizza = usrInput;
                break;
            case '3':
                cout << "You have ordered a large pizza." << endl;
                largePizza = usrInput;
                break;
            }

            cout << "Would you like to order again?" << endl;;
            cout << "(Y or N): ";
            cin >> Choice;
            if (Choice == 'n' || Choice == 'N'){
                loop++;
            }
            runTotal = (smallPizza * smallPrice) + (mediumPizza * mediumPrice) + (largePizza * largePrice);
            cout << "Your running total is: " << runTotal << endl;

    } while (loop == 0);

    cout << "Would you like to apply coupon?" << endl;;
    cout << "(Y or N): ";
    cin >> Choice;
    if (Choice == 'y' || Choice == 'Y'){
        cout << "Applying coupon," << endl;
        pizzaTotal = smallPizza + mediumPizza + largePizza;
        totalPrice = pizzaTotal * 2;
        totalPrice = runTotal - totalPrice;
        cout << "Total Price of pizza's it: " << totalPrice << endl;
    }
    else{
        cout << "Your total is: " << runTotal << endl;
    }

    return 0;
}
