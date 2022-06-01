#include <iostream>

using namespace std;

int main()
{
    int totalGrade[] = {};
    int usrIn = 0;
    int numStudent = 0;

    cout << "Welcome to your grade book," << endl;
    cout << "How many students would you like to enter grades for?" << endl;
    cin >> numStudent;
    for(int i =1; i<=numStudent; i++)
    {
        totalGrade[i] = 0;
    }

    for(int i = 1; i<=numStudent;i++)
    {
        cout << "Please enter the students first grade out of 100" << endl;
        cin >> usrIn;
        totalGrade[i] = totalGrade[i] += usrIn;
        cout << "Please enter the students second grade out of 100" << endl;
        cin >> usrIn;
        totalGrade[i] = totalGrade[i] += usrIn;
        cout << "Please enter the students third grade out of 100" << endl;
        cin >> usrIn;
        totalGrade[i] = totalGrade[i] += usrIn;
        cout << "Please enter the students fourth grade out of 100" << endl;
        cin >> usrIn;
        totalGrade[i] = totalGrade[i] += usrIn;
    }
    for(int i = 1; i<=numStudent; i++)
    {
        if(totalGrade[i] >= 372 && totalGrade[i] <= 400)
        {
          cout << "Student " << i;
          cout << "'s grade: A" << endl;
        }
        else if(totalGrade[i] >= 300 && totalGrade[i] <= 371)
        {
          cout << "Student " << i;
          cout << "'s grade: B" << endl;
        }
        else if(totalGrade[i] >= 264 && totalGrade[i] <= 299)
        {
          cout << "Student " << i;
          cout << "'s grade: C" << endl;
        }
        else if(totalGrade[i] >= 221 && totalGrade[i] <= 263)
        {
          cout << "Student " << i;
          cout << "'s grade: D" << endl;
        }
        else if(totalGrade[i] <= 220)
        {
          cout << "Student " << i;
          cout << "'s grade: F" << endl;
        }

    }

    return 0;
}
