//���� ��� �ڵ忡 ����� �ּ��� �ٴ� ���� ����
//�ﰢ�� �ܿ�� 
//���� ����/ ���� �����4 ���� �̹Ƿ� �� ���� �����ϴ�.
//�ﰢ���� ���ǿ� ���ؼ� ���� ������
//�� ���̵� �ְ� ������� �а��� ���� �ﰢ���� ����� �͵� ���� �� ����.
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c != 180) cout << "Error";
	else {
		if (a == b && b == c) cout << "Equilateral";
		else if (a != b && b != c && c != a) cout << "Scalene";
		else if (a == b && c != a) cout << "Isosceles";
		else if (a == c && b != a) cout << "Isosceles";
		else if (c == b && a != c) cout << "Isosceles";
	}
}