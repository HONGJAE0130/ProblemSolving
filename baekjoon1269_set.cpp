//<프로그래밍 대회를 위한 알고리즘과 자료구조 입문 > 책에 예제된 set과 map의 범위에서 나온 백준 문제이다.
//set은 중복 원소를 자동적으로 배제 한다. & 오름차순 정렬 
// set 에 A 원소를 넣은 후 B 원소를 하나 씩 넣으면서 중복된 것을 배제한다 그러면 자연스럽게 교집합은 제외 되고 대칭 차집합만 남는다.
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