#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double A, B, C;
	cin >> A >> B >> C;

	cout << (long long)max(A / B * C, A*B / C);
}