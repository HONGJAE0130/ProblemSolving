#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;


const int MAX_INDEX = 20;
const int MAX = 100 + 1;
int N;
bool switches[MAX];


void pressSwitch(int idx) {
	switches[idx] = 1 - switches[idx];
}
bool isEndOfLine(int idx) {
	return (idx % MAX_INDEX == 0 || idx == N);
}
int main(void) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> switches[i];
	}
	int inputs;
	cin >> inputs;
	for (int i = 0; i < inputs; i++) {

		int gender, num; cin >> gender >> num;
		if (gender == 1) {
			for (int j = num; j <= N; j += num) {
				pressSwitch(j);
			}
			continue;
		} pressSwitch(num);
		for (int j = num - 1, k = num + 1; (j >= 1 && k <= N && switches[j] == switches[k]); j--, k++) {
			pressSwitch(j); pressSwitch(k);
		}
	} for (int i = 1; i <= N; i++) {
		cout << switches[i];
		if (isEndOfLine(i)) {
			cout << "\n"; continue;
		} cout << " ";
	}
	return 0;
}

