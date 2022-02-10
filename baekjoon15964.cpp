//백준에서 서브 테스크는 처음받아보네
//int 로 하니까 A,B<=1000 이라는거 보고
//범위 좀 늘리게 longlong 하니까 100점!! 
//개꿀띠!!

#include <iostream>
using namespace std;

int main() {
	long long A, B;
	cin >> A >> B;

	cout << (A + B)*(A - B);
}