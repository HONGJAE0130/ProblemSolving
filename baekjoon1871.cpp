#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int gogo(string first) {
	int sum = 0;
	for (int j = 0; j < first.size(); j++) {
		sum += (first[j] - 'A') * pow(26, first.size() - j - 1);
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		string first = s.substr(0, 3);
		string back = s.substr(4, 4);

		if (abs(gogo(first) - stoi(back)) <= 100) {
			cout << "nice\n";
		}
		else {
			cout << "not nice\n";
		}
	}

}