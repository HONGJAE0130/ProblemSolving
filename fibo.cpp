//�޸����̼� ����̴�. N�� ��찡 ū ��쿡�� �̷� ����� ��������� N�� ���� ��쿡��
//ALDS1_10_A 
//��͹������ ������ �ص��ȴ�.

#include <iostream>

using namespace std;
int n,dp[50];


int main() {
	cin >> n;
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];

	return 0;
}