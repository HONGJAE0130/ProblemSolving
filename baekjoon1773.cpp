#include <iostream>
using namespace std;
int fire[2000001];

int main() {

	int N, C;
	int cnt = 0;
	int student[100];

	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		cin >> student[i];

	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= C; j += student[i]) {
			fire[j] = 1;
		}
	}
	for (int i = 0; i <= C; i++) {
		if (fire[i] == 1) {
			cnt++;
		}
	}
	cout << cnt << endl;
}