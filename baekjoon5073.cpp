#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 3;
int A[3];
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		int a, b, c;
		cin >> A[0] >> A[1] >> A[2];
		if (A[0] == 0 && A[1] == 0 && A[2] == 0)
		{
			break;
		}
		int sides[MAX] = { A[0], A[1], A[2] };
		sort(A, A + MAX);
		if (sides[2] >= A[1] + A[0]) {
			cout << "Invalid\n"; continue;
		}
		if (A[0] == A[1] && A[1] == A[2] && A[2] == A[0]) {
			cout << "Equilateral\n"; continue;
		}
		if (A[0] == A[1] || A[1] == A[2] || A[2] == A[0]) {
			cout << "Isosceles\n";
			continue;
		}
		cout << "Scalene\n";
	}
	return 0;
}

