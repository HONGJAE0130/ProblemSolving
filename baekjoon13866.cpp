#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a;
	int K[4];
	for (int i = 0; i < 4; i++) {
		cin >> K[i];
	}
	sort(K, K + 4);
	cout << abs(K[0] + K[3] - (K[1] + K[2]));


}