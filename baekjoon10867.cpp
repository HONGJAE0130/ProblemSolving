//set �����̳ʴ� ����Ʈ���� ���·� ������ �Ǵµ� �� �������� �ڵ������� �ߺ��Ǵ� ���� �������.
//set�� �� �Ŀ� ������� ����� �ϸ� �Ǵ� ������ ������.

#include <iostream>
#include <set>
using namespace std;
int main() {
	int n, a; set<int> s;
	cin >> n;
	while (n--) {
		cin >> a;
		s.insert(a);
	}
	for (auto i : s)
		cout << i << " ";

	cout << endl;
}