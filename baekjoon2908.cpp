//백준 2908 string 으로 분류되어서 세 자리수기 때문에 계산하기 편했다.
//int 형으로 받아서 각 자리수의 몫과 나머지를 계산해서 비교하는 방법도 있을거같다.
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
	string answer;
	cin >> A >> B;

	if (A[2] == B[2]) {
		if (A[1] == B[1]) {
			if (A[0] < B[0]) { answer = B; }
			else answer = A;
		}
		else {
			if (A[1] < B[1]) { answer = B; }
			else answer = A;
		}
	}
	else {
		if (A[2] < B[2]) answer = B;
		else answer = A;
	}
	cout << answer[2] << answer[1] << answer[0];
}