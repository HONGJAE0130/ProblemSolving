#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c < 100) {
		int k = min(a, min(b, c));
		if (k == a) cout << "Soongsil";
		else if (k == b) cout << "Korea";
		else cout << "Hanyang";
	}
	else cout << "OK";
}