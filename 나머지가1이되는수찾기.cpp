//���α׷��ӽ� ���� �ڵ� ç���� ���� 3 
//������ �������� ���� ���� �Ҽ��� ��쿡�� N���� -1�Ǵ� ���� ã�ƾ� �ϱ⿡ 
//�ð��� �� �ɸ��� �Ҽ�ã�� isPrime���� �Ҽ��� ã�Ұ� 
//�Ҽ��� �ƴ� �ÿ��� i�� 1���� �����Ű�� ������� n�� ������ �������� 1�̵Ǹ� break; �� �����.
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}

	for (int i = 1; i <= sqrt(n); i++) {
		if ((n%i) == 0) {
			return false;
		}
	}
	return true;
}


int solution(int n) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int answer = 0;
	if (isPrime(n) == true) answer = n - 1;
	else {
		for (int i = 1; i < 1000000; i++)
		{
			if (n%i == 1) {
				answer = i;
				break;
			}
		}
	}
	return answer;
}