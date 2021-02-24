#include <iostream>
#include <cmath>
using namespace std;
double fun(double x)
{
	return x <= 3 ? ((pow(x, 2)) - 3 * x + 9) : (1 / ((pow(x, 3)) + 6));
}
int main()
{
	double x;
	cout << "x = "; cin >> x;
	cout << "f = " << fun(x) << endl;
}