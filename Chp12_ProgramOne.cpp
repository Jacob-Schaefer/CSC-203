#include <iostream>

using namespace std;



int main()
{
    int Sale[3][10] = {{2400,1500,600,790,1000,6300,1300,2700,4700,1200},{3500,7000,450,240,1000,7000,450,5500,4800,1300},{2000,1000,2100,500,1000,8000,700,6000,4900,400}};
    char usrLoop = 'y';
    double Bonus = 0;
    int Total = 0;
    double bonusTotal = 0;


        cout << "please enter bonus amount: ";
        cin >> Bonus;
        cout << endl;
        cout << "Bonus amount: %" << Bonus << endl;


            for(int i = 0; i < 10;i++ )
            {
                for(int j = 0; j < 3; j++)
                {
                  Total += Sale[j][i];
                }
                bonusTotal = Total*Bonus;
                cout << "Sales-person: " << i+1;
                cout << " Total sales: $" << Total << " Bonus: $" << bonusTotal << endl;
                Total = 0;
            }

    return 0;
}


