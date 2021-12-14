#include <iostream>
using namespace std;

int main()
{
	double a;
	int n;
	cin >> n;
	while (n--) {
		cin >> a;
		printf("$%.2lf\n", a*0.8);
	}
}