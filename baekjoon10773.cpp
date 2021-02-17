#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	int money = 0;
	stack <int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> money;
		if (money != 0)
			st.push(money);
		else
			st.pop();
	}
	int sum = 0;
	for (int i = 0; !st.empty(); ++i) {
		sum = sum + st.top();
		st.pop();
	}
	cout << sum << endl;
	return 0;
}