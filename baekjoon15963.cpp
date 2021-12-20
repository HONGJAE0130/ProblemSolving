//비교연산자를 이용해서 두 수가 같은지를 비교하는 간단한 구현 문제다.
//15963 c++ 백준 CASIO 
#include <iostream> 
using namespace std; 
int main(void) { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long N, M;

	cin >> N >> M;

	cout << (N == M) << "\n";
	return 0;
}

