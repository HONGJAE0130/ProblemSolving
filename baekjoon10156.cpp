#include <iostream>
using namespace std;

int main() {
	int answer = 0;
	int K, N, M;
	cin >> K >> N >> M;
	if (K*N <= M) {
		answer = 0;
	}
	else
		answer = K * N - M;


	cout << answer;
}