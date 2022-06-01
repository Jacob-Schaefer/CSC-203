#include <iostream>

using namespace std;

int main()
{
    int numPounds = 0;
    double owedGross = 0;
    double owedNet = 0;
    double lbPrice = 0;
    char Tax = 'n';
    double salesTax = .035;
    int taxBool = 0;

cout << "How many pounds of coffee would you like to order: ";
cin >> numPounds;
cout << "Please enter the price per pound: ";
cin >> lbPrice;
while(1){
    cout << "Would you like to apply a sales tax of 3.5%,(Y or N): ";
    cin >> Tax;
    if (Tax == 'n' || Tax == 'N'){
        cout << "No sales tax will be applied" << endl;
        break;
    }
    else if (Tax == 'y' || Tax == 'Y'){
        cout << "Sales tax willed be applied" << endl;
        taxBool == 1;
        break;
    }
    else{
        cout << "That is an invalid answer." << endl;
    }
  }

  cout << "Calculating total cost." << endl;
  owedGross = (numPounds * lbPrice);
  if (taxBool == 1){
    owedNet = owedGross * salesTax;
    cout << "your total amount owed is: " << owedNet << endl;
  }
  else{
    cout << "your total amount owed is: " << owedGross << endl;
  }

  return 0;
}
