#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, W, H;
	cin >> N >> W >> H;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if ((a*a) <= W * W + H * H) {
			cout << "DA" << endl;
		}
		else cout << "NE" << endl;
	}
}