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
		if (temp1 == x) cout << B[temp2++] << " ";				//A배열이 끝까지 도달하면 B배열 출력
		else if (temp2 == y) cout << A[temp1++] << " ";			//B배열이 끝까지 도달하면 A배열 출력
		else {													//오름 차순 정렬이기에 값이 작은 것을 출력 중복되는 값은 없다!
			if (A[temp1] > B[temp2])							// A가 더 크므로 
				cout << B[temp2++] << " ";						//B출력
			else
				cout << A[temp1++] << " ";
		}
	}
	return 0;
}