#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (true) {
		int num;
		cin >> num;
		if (num == 0) break;
		else {
			if (num % n == 0) cout << num << " is";
			else cout << num << " is NOT";
		}

		cout << " a multiple of " << n << "." << endl;
	}
}