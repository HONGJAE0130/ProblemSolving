//<���α׷��� ��ȸ�� ���� �˰���� �ڷᱸ�� �Թ� > å�� ������ set�� map�� �������� ���� ���� �����̴�.
//set�� �ߺ� ���Ҹ� �ڵ������� ���� �Ѵ�. & �������� ���� 
// set �� A ���Ҹ� ���� �� B ���Ҹ� �ϳ� �� �����鼭 �ߺ��� ���� �����Ѵ� �׷��� �ڿ������� �������� ���� �ǰ� ��Ī �����ո� ���´�.
#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> answer;
	int A, B;
	cin >> A >> B;
	for (int i = 0; i < A; i++) {							//
		int x;
		cin >> x;
		answer.insert(x);
	}
	for (int i = 0; i < B; i++) {
		int y;
		cin >> y;
		if (answer.count(y)) answer.erase(y);
		else answer.insert(y);
	}
	cout << answer.size();
}