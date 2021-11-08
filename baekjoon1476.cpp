#include <iostream>
using namespace std;

int E, S, M, year;
int main(int argc, const char * argv[]) {
	cin >> E >> S >> M;

	while (1) {
		year++;
		if (((year - E) % 15 == 0) && ((year - S) % 28 == 0) && ((year - M) % 19 == 0))
			break;
	}

	cout << year << '\n';
	return 0;
}