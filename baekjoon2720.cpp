#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int money;
		cin >> money;
		cout << money / 25 << " ";
		money = money % 25;
		cout << money / 10 << " ";
		money = money % 10;
		cout << money / 5 << " ";
		money = money % 5;
		cout << money / 1 << "\n";
	}
}