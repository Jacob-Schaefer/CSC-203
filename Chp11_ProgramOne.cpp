#include <iostream>
#include <string>
using namespace std;

int main()
{
    int minPoints[5] = {0,300,350,400,450};
    char Grade[5] = {'F','D','C','B','A'};
    double usrIn = 0;
    char usrLoop = 'y';
    while(usrLoop == 'y' || usrLoop == 'Y')
    {
        cout << "Please input points: ";
        cin >> usrIn;
        cout << endl;
      if(usrIn < 0)
      {
            cout << "invalid entry" << endl;
      }
      if(usrIn >= minPoints[4])
      {
           cout << "Student grade is: " << Grade[4] << endl;
      }
      if(usrIn < minPoints[4] && usrIn >= minPoints[3])
      {
           cout << "Student grade is: " << Grade[3] << endl;
      }
      if(usrIn < minPoints[3] && usrIn >= minPoints[2])
      {
            cout << "Student grade is: " << Grade[2] << endl;
      }
      if(usrIn < minPoints[2] && usrIn >= minPoints[1])
      {
          cout << "Student grade is: " << Grade[1] << endl;
      }
      if(usrIn < minPoints[1])
      {
          cout << "Student grade is: " << Grade[0] << endl;
      }



      cout << endl;
      cout << "Would you like to enter different points?" << endl;
      cout << "(yes or no): ";
      cin >> usrLoop;
    }
   return 0;
}
