#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A[3];

	int answer = 0;
	for (int i = 0; i < 3; i++) {
		cin >> A[0] >> A[1] >> A[2];
	}
	sort(A, A + 3);
	int b = A[2] - A[1];
	int a = A[1] - A[0];
	if (a > b) cout << A[0] + b;
	else if (a == b) cout << A[2] + a;
	else cout << A[1] + a;
}