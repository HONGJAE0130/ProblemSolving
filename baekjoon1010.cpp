#include <iostream>
using namespace std;

int bridge(int a, int b);
int main() {
	int num;
	int A, B;
	int i;
	cin >> num;
	for (i = 0; i < num; i++)
	{
		cin >> A >> B;
		cout << bridge(A, B);
	}	
}
int bridge(int a, int b)
{
	int i;
	int com = 1;
	int com2 = 1;
	if (a == 1) return b;
	for (i = a; i > a - b; i--) {
		com = com * i;
	}
	for (i = b; i > 0; i--) {
		com2 = com2 * i;
	}
	return com / com2;
}