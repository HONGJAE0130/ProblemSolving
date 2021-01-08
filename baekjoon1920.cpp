#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector <int> v;
int a, b, c, d;

void binarySearch(int key) {
	int start = 0;
	int end = a - 1;
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;
		if (v[mid] == key) {
			cout << 1 << "\n";
			return;
		}
		else if (v[mid] > key) {
			end = mid - 1;
		}
		else if (v[mid] < key) {
			start = mid + 1;
		}
	}
	cout << 0 << "\n";
	return;
}
int main() {

	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());

	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> d;
		binarySearch(d);
	}
	return 0;
}