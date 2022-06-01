#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool gameOver;
bool reset;
const int width = 40;
const int height = 20;
int x,y,x2,y2, ballX, ballY, Score;
enum eDirection {STOP=0,LEFT,RIGHT,UP,DOWN};
enum bDirection {UPDIAGR,DODIAGR,STRAIGHTR,UPDIAGL,DODIAGL,STRAIGHTL};
eDirection dir;
eDirection oppdir;
bDirection balldir;

void Setup()
{
 gameOver = false;
 reset = false;
 dir = STOP;
 x = 2;
 y =  height/2;
 x2 = 38;
 y2 = height/2;
 ballX = width/2;
 ballY = height/2;
 int ballrand = rand() %6;

        if(ballrand == 0)
            balldir = UPDIAGR;
            else if(ballrand == 1)
            balldir =DODIAGR;
            else if(ballrand == 2)
            balldir =STRAIGHTR;
            else if (ballrand == 3)
            balldir =UPDIAGL;
            else if(ballrand == 4)
            balldir =DODIAGL;
            else if(ballrand == 5)
            balldir =STRAIGHTL;


}

void Draw()
{
    system("cls");
    for(int i =0; i <width+2;i++)
        cout << "#";
    cout << endl;

    for(int i=0; i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(j == 0)
                cout << "#";
            if(i==y && j ==x)
                cout << "I";
            else if(i == ballY && j == ballX)
                cout << "O";
            else if(i == y2 && j == x2)
                cout << "I";
            else
                cout << " ";
            if (j == width -1)
                cout << "#";
        }
        cout << endl;
    }

    for(int i =0; i <width+2;i++)
        cout << "#";
    cout << endl;
    cout << "Score:" << Score<< endl;
}
void ballInput()
{
    if(ballY == 1)
    {
     int ballrand = rand() %2;
        if(ballrand == 0)
            balldir =DODIAGR;
        else if(ballrand == 1)
            balldir = DODIAGL;



    }
    else if(ballY == height-1)
    {
     int ballrand = rand() %3;
        if(ballrand == 0)
            balldir = UPDIAGR;
          else if(ballrand == 1)
            balldir =UPDIAGL;

    }
    else if(ballX == x && ballY == y)
    {
     int ballrand = rand() %2;
        if(ballrand == 0)
            balldir = UPDIAGR;
         else if(ballrand == 1)
            balldir =DODIAGR;
         else if(ballrand == 2)
            balldir =STRAIGHTR;

    }
    else if(ballX == x2 && ballY == y2)
    {
     int ballrand = rand() %2;
        if(ballrand == 0)
            balldir = UPDIAGL;
        else if(ballrand == 1)
            balldir =DODIAGL;
        else if(ballrand == 2)
            balldir =STRAIGHTL;

    }

}
void ballLogic()
{
    switch(balldir)
    {
    case UPDIAGL:
        ballY--;
        ballX--;
        break;
    case DODIAGL:
        ballY++;
        ballX--;
        break;
    case UPDIAGR:
        ballY--;
        ballX++;
        break;
    case DODIAGR:
        ballY++;
        ballX++;
        break;
    case STRAIGHTL:
        ballX--;
        break;
    case STRAIGHTR:
        ballX++;
        break;
    default:
        break;
    }
    if(ballX >height || ballX <0)
        reset = true;
    if(ballX >= width)
        Score += 10;
}
void Input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
        case 'w':
            dir = UP;
            break;
        case 's':
            dir =DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
    if(y>height)
        dir = UP;
    if(y<0)
        dir = DOWN;
    switch(dir)
    {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

}

void oppInput()
{
    if(x2 == ballX)
        oppdir = STOP;
    else if(ballY > 10)
        oppdir == DOWN;
    else if(ballY < 10)
        oppdir == UP;
    else
    {
        int opprand = rand() %2;
        if(opprand == 0)
            oppdir == UP;
        else if(opprand == 1)
            oppdir == DOWN;
    }
}

void oppLogic()
{
    if(oppdir == UP)
        y2--;
    else if(oppdir == DOWN)
        y2++;
    else if(oppdir == STOP)
    {
    }

}
int main()
{
    Setup();
    while(!gameOver)
    {
        if(reset == true)
            Setup();

       Draw();
       ballLogic();
       ballInput();
       Input();
       Logic();
       oppInput();
       oppLogic();
       Sleep(10);
    }
    return 0;
}
