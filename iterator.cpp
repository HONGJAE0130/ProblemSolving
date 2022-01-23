//이터레이터 - 모든 컨테이너 에서 사용 가능하며 , 배열의 요소에 포인터처럼 접근이 가능하다. 
//begin(), end()가 제일 많이 사용 되며  vector<int>::itertator it

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
	vector<int>::iterator it;						//iterator 선언을 꼭 해줘야 한다.
	for (it = v.begin(); it != v.end(); it++) {		//print 하기 위해서 비긴 , 엔드 까지 ++ / 값을 옮기는 것이 아니라 위치를 옮기는 것이다
		cout << *it;								// !! 제일 중요한 포인터처럼 접근하기 위해서 *을 꼭 붙여야한다.
	}
	cout << endl;
}
int main() {
	int N;
	vector<int> v;
	cin >> N;										

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	print(v);								//ex ) v = { 2 , 0 , 1, 4, 5 }

	vector<int>::iterator it;
	*it = 3;								// 3 0 1 4 5
	it++;									// v[0] 에서 v[1]로 이동
	(*it)++;								// 3 1 1 4 5

	print(v);
}