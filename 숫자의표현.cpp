#include <string>
#include <vector>

using namespace std;

int solution(int n) {// 15�� ��������  7 8 �̹Ƿ� ���ؼ����� ���� ������ for���� �������� ȿ�����̴�.
	int num = (n + 1) / 2;
	int sum = 0, answer = 1, j = 1;

	for (int i = 1; i <= num; i++) { //1 ~ n�� ���ݰ� ����
		sum += i;
		if (sum >= n) {
			while (sum > n) sum -= j++;
			if (sum == n) answer++;
		}
	}

	return answer;
}