#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[101] = {};
	int num;
	int count = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	int find;
	cin >> find;
	for (int i = 0; i < num; i++) {
		if (arr[i] == find)
			count++;
	}
	cout << count;
}