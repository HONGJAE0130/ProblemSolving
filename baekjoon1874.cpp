#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int num;
	cin >> num;

	int k, cnt = 1;
	int popCnt = 0;
	stack<int> st;
	string answer;

	for (int i = 0; i < num; i++) {
		cin >> k;


		if (st.empty()) {
			st.push(cnt);
			cnt++;
			answer += "+";
		}

		while (st.top() != k) {
			if (cnt <= num) {
				st.push(cnt);
				cnt++;
				answer += "+";
			}
			else
				break;
		}

		if (st.top() == k) {
			st.pop();
			answer += "-";
			popCnt++;
		}
	}

	if (popCnt == num) {
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << "\n";
		}
	}
	else {
		cout << "NO\n";
	}

	return 0;
}
