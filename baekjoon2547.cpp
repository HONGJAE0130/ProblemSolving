#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {

		int student = 0;
		cin >> student;

		long long sum = 0;


		for (int j = 0; j < student; j++) {
			long long candy;
			cin >> candy;
			sum = (sum + candy) % student;
		}
		if (sum%student == 0) cout << "YES\n";
		else cout << "NO\n";
	}

}