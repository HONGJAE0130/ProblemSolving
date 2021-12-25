#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	int k;
	int one = 0, two = 0;
	for (int i = 0; i < N; i++) {
		cin >> k;
		if (k == 1) one++;
		else two++;
	}
	if (one > two)cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";

}