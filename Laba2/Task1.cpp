
#include <iostream>
#include <cstdlib>
#include <cmath>
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
int main() {
    double x, y;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << "Dot is in Area " << isInArea(x,y) << endl;
}
