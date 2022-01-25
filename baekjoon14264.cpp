//���� 14264 ���������� �ﰢ��
// ���������� �����ϴ� �� �ﰢ���� �׸��� 1���� ���ﰢ���� 3���� �̵ �ﰢ���� �����µ�
// ���� ���� �ﰢ���� ���̸� ���ϴ� ���� ������. 
// 120���� �а��� �ﰢ���� ���� �̵ �ﰢ���� ���̸� ���ϴ� ���� 
// ���� L , ���� �亯 = sqrt(3)*L , ���� 1/2*L �� �ﰢ���� ���̸�
// �Ҽ��� 10^-9���� �̹Ƿ� 10lf
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double L;
	cin >> L;

	double result = L * L * sqrt(3) / 4;

	printf("%.10lf\n", result);

	return 0;
}
