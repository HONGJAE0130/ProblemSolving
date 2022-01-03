//set 컨테이너는 이중트리의 형태로 저장이 되는데 이 과정에서 자동적으로 중복되는 값은 사라진다.
//set을 한 후에 순서대로 출력을 하면 되는 간단한 문제다.

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