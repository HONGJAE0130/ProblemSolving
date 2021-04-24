#include <iostream>
#include <queue>
using namespace std;
bool buffer[3];
void swap(int a, int b) {
	int temp = buffer[a];
	buffer[a] = buffer[b];
	buffer[b] = temp;
}
int main(int argc, const char * argv[]) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	buffer[0] = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		swap(a - 1, b - 1);
	}
	for (int i = 0; i < 3; i++) {
		if (buffer[i]) cout << i + 1;
	}
	return 0;
}