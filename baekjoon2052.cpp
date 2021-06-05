#include <iostream>
using namespace std;

int main() {
	int N;
	double mul = 1.0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		mul *= 2;
	}

	printf("%.*f", N, 1.0 / mul);

	return 0;
}