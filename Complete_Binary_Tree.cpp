#include <iostream>

using namespace std;
#define MAX 100000

int parent(int i) { return i / 2; }
int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }
int main() {
	int n;
	int H[MAX];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> H[i + 1];
	}
	for (int i = 1; i <= n; i++) {
		cout << "node " << 1 << ": key = " << H[i] << ",";
		if (parent(i) >= 1) cout << "parent key=" << H[parent(i)] << ", ";
		if (left(i) <= n) cout << "left key = " << H[left(i)] << "< ";
		if (right(i) <= n) cout << "right key = " << A[right(i)] << ", ";
		cout << endl;
	}

}

	