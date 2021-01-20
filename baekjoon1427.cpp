#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	string s;
	vector<int> vector_sorted;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		int input = s[i] - '0';
		vector_sorted.push_back(input);
	}

	sort(vector_sorted.begin(), vector_sorted.end());

	for (int i = s.length() - 1; i >= 0; i--) {
		cout << vector_sorted[i];
	}
}
/*vector <int> v;
int i;
int main() {
	int a;
	cin >> a;
	for (i = 1000000000; i >= 1; i = i / 10)
	{

		if (a / i != 0) {
			v.push_back(a / i);			
		}
		
	}
	sort(v.begin(), v.end());
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	return 0;
}
*/