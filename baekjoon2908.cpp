//���� 2908 string ���� �з��Ǿ �� �ڸ����� ������ ����ϱ� ���ߴ�.
//int ������ �޾Ƽ� �� �ڸ����� ��� �������� ����ؼ� ���ϴ� ����� �����Ű���.
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