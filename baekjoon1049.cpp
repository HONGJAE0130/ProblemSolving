#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int pp = 54321, ii = 54321;
	while (m--) {
		int a, b; cin >> a >> b;
		if (a < pp) pp = a;
		if (b < ii) ii = b;
	}
	cout << min((n / 6 + 1)*pp, min(n / 6 * pp + n % 6 * ii, n*ii)) << '\n';
}