//gcd�� , lcm �� �Լ��� ���� �س����������� �����ͼ� ����ߴ�.
//�Ҽ� �Ǻ��ϴ� �Ͱ� ���� �̸� ������ ���� �Լ��� ������ ���ϰ� ������ Ǯ �� �־���.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <string>
#include <vector>

using namespace std;
int GCD(int a, int b) {         // �ִ�����
	if (a == 0) return b;
	return GCD(b % a, a);
}
int LCM(int a, int b) {         // �ּҰ����
	return a * b / GCD(a, b);
}
int solution(vector<int> arr) {
	int answer = 0;
	answer = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		answer = LCM(answer, arr[i]);
	}
	return answer;
}