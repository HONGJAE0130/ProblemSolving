#include <iostream>

using namespace std;

int main() {
	int N, M, K, answer = 0;
	cin >> N >> M >> K;
	answer = min(M, N / 2);
	//���л��� 1���̴ϱ� ���л�/2 �ؼ� �ִ� ���� ���ϰ�
	answer = min(answer, (N + M - K) / 3);
	//�� ���� ���ϰ� �� ������ 3�� ��( /3 ) ���Ͻ� ( -K) �� ���� �����

	cout << answer;
}