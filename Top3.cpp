//���α׷��� ��ȸ ������ ���� �˰���� �ڷᱸ�� �Թ� ���� Top 3 �� ��� �ϴ� ����
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A[10] = { 0, };
	int k = 3;
	int N = 10;
	/*
	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}
	*/

	/* ��üŽ���ؼ� ���� ū���� ���� ��� 3�� �ݺ�
	while (k--) {
		int max=-1;
		for (int i = 0; i < N; i++) {
			if (max < A[i]) {
				max = A[i];
			}
		}
		cout << max << " ";
		N--;
	}*/

	/*
	sort(A, A+10);
	cout << A[9] << " " << A[8] << " " << A[7];
	*/
	int B[101] = { 0, };
	for (int i = 0; i < 10; i++) {
		int score;
		cin >> score;
		B[score] = score;
	}
	int j = 100;
	while (k) {
		if (B[j] != 0) {
			cout << B[j] << " "; k--;
		}
	}

	system("pause");
	return 0;
}