#include <iostream>

using namespace std;
int T[51];
int i, j;
int main() {
	int N;
	cin >> N;
	int cnt = 0;
	int STD = 0;
	//왼쪽에서 볼 때
	for (i = 0; i < N; i++) {
		cin >> T[i];
		if (STD < T[i]) { STD = T[i]; cnt++; }
	}
	cout << cnt << endl;
	cnt = 0;
	STD = 0;
	//오른쪽에서 볼 때
	for (j = i; j >= 0; j--) {
		if (STD < T[j]) { STD = T[j]; cnt++; }
	}
	cout << cnt << endl;
}