#include <iostream>
#include <algorithm>
using namespace std;
int A[1000001];
int B[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y;
	int i, j;
	cin >> x >> y;

	for (i = 0; i < x; i++) {
		cin >> A[i];
	}
	for (j = 0; j < y; j++) {
		cin >> B[j];
	}
	int temp1 = 0, temp2 = 0;
	while (temp1 + temp2 < x + y) {
		if (temp1 == x) cout << B[temp2++] << " ";				//A�迭�� ������ �����ϸ� B�迭 ���
		else if (temp2 == y) cout << A[temp1++] << " ";			//B�迭�� ������ �����ϸ� A�迭 ���
		else {													//���� ���� �����̱⿡ ���� ���� ���� ��� �ߺ��Ǵ� ���� ����!
			if (A[temp1] > B[temp2])							// A�� �� ũ�Ƿ� 
				cout << B[temp2++] << " ";						//B���
			else
				cout << A[temp1++] << " ";
		}
	}
	return 0;
}