#include <iostream>
#include <stack>
#include <utility>
using namespace std;
int n, k;
stack<pair<int, int> > st;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		while (!st.empty()) {
			//������ top�� ���� �Է°����� ũ�ٸ� ��ȣ ���� �����̹Ƿ� 
			if (st.top().second > k) {
				//top�� ��ġ�� ����ϰ� �ݺ����� Ż���Ѵ�. 
				cout << st.top().first << " ";
				break;
			}
			st.pop();
		}
		//������ ������� 0�� ����Ѵ�. 
		if (st.empty()) cout << "0 ";
		//�׸��� ���� ž�� ���ÿ� push 
		st.push(make_pair(i, k));
	}
}