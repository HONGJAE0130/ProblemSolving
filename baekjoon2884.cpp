#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	M = M - 45;
	if (M < 0)
	{
		M = M + 60;
		H = H - 1;
	}
	if (H == 24)
		H = 0;
	if (H < 0)
		H = 23;

	cout << H << " " << M;

	return 0;
}