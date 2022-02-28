#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		string a, b;
		vector<int> v(2);
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (a == "R") { if (b == "R") continue; else if (b == "P") v[1]++; else v[0]++; }
			else if (a == "S") { if (b == "R") v[1]++; else if (b == "P") v[0]++; else continue; }
			else { if (b == "R") v[0]++; else if (b == "P") continue;  else v[1]++; }
		}
		if (v[0] > v[1]) cout << "Player 1\n";
		else if (v[0] < v[1]) cout << "Player 2\n";
		else cout << "TIE\n";
	}
}