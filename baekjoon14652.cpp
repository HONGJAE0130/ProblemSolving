#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y, a;
	cin >> x >> y >> a;
	cout << a / y << " " << a % y;
	return 0;
}