#include<iostream>
using namespace std;
int d[100000];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		d[i] = i; // 기본적으로 i는 1^2의 i개 항으로 표현할 수 있어서 초기화를 i로 해주자
		for (int j = 1; j * j <= i; j++) {
			if (d[i] > d[i - j * j] + 1) {
				d[i] = d[i - j * j] + 1;
			}
		}
	}
	cout << d[n] << '\n';
}