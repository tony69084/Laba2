#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
using namespace std;
bool isInArea(double x, double y) {
    if (x >= -1 && x <= 0)
        if (y >= 0 && y <= 1)
            return true;
        else
            return false;
    else if ((pow(x, 2) + pow(y, 2)) <= 1)
        if (x >= 0 && x <= 1)
            if (y <= 0 && y >= -1)
                return true;
            else
                return false;
        else
            return false;
    else
        return false;
}
double fun(double x)
{
    return x <= 3 ? ((pow(x, 2)) - 3 * x + 9) : (1 / ((pow(x, 3)) + 6));
}
int main() {
    double x, y;
    cout << "Choose a task" << endl;
    cout << "1 - Task1" << endl;
    cout << "2 - Task2" << endl;
    switch (_getch()) {
    case '1':
        system("cls");
        cout << "x="; cin >> x;
        cout << "y="; cin >> y;
        cout << "Dot is in Area " << isInArea(x, y) << endl;
        break;
    case '2':
        system("cls");
        cout << "x = "; cin >> x;
        cout << "f = " << fun(x) << endl;
        break;
    default:
        cout << "Wrong enter" << endl;
        break;
    }
}