#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
		cout << a << '+' << b << '=' << c;
	else if (a - b == c)
		cout << a << '-' << b << '=' << c;
	else if (a * b == c)
		cout << a << '*' << b << '=' << c;
	else if (a / b == c)
		cout << a << '/' << b << '=' << c;
	else if (a == b + c)
		cout << a << '=' << b << '+' << c;
	else if (a == b - c)
		cout << a << '=' << b << '-' << c;
	else if (a == b * c)
		cout << a << '=' << b << '*' << c;
	else if (a == b / c)
		cout << a << '=' << b << '/' << c;
}