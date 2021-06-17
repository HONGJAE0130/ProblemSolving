#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int t;
	int N, M, num, count = 0;


	cin >> t;
	while (t--) {
		queue<pair<int, int> > q;
		priority_queue<int> pq;

		cin >> N >> M;
		count = 0;

		for (int i = 0; i < N; i++) {
			cin >> num;
			pq.push(num);
			q.push({ num,i });
		}

		while (!pq.empty()) {
			pair<int, int> n1 = q.front();
			int n2 = pq.top();

			if (n1.first == n2) {
				if (n1.second == M) {
					cout << count << endl;
					break;
				}
				pq.pop();
				count++;
			}
			else
				q.push(n1);

			q.pop();
		}

	}
	return 0;
}