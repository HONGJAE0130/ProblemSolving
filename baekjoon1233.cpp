#include <iostream>
using namespace std;

int main() {
	int S1, S2, S3;
	cin >> S1 >> S2 >> S3;
	int* sum = new int[S1 + S2 + S3];

	for (int i = 0; i < S1 + S2 + S3; i++) {
		sum[i] = 0;
	}

	for (int i = 1; i <= S1; i++) {
		for (int j = 1; j <= S2; j++) {
			for (int k = 1; k <= S3; k++) {
				sum[i + j + k]++;
			}
		}
	}

	int max = sum[0], num = 0;
	for (int i = 0; i < S1 + S2 + S3; i++) {
		if (max < sum[i]) {
			max = sum[i];
			num = i;
		}
	}
	cout << num;
	return 0;
}