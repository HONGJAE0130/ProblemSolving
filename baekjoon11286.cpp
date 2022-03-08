#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
//연산자 오버라이딩 operator()
struct compare {
	bool operator()(int a, int b) {
		if (abs(a) > abs(b)) {
			return true;
		}
		else if (abs(a) < abs(b)) {
			return false;
		}
		else return a > b;
	}
};
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	priority_queue<int, vector<int>, compare()> pq;
	 
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int X;
		cin >> X;
		if (X == 0) {
			if (pq.empty()) cout << "0\n";
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(X);
		}
	}
}
