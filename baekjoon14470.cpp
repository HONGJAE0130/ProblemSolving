#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a < 0) //��Ⱑ 0�� �̸� = 0������ �ø��� �ɸ��� �ð� + �ص��ϴ� �ð� + b������ �ø��� �ð�
		cout << -1 * a * c + d + e * b << '\n';
	else if (a > 0)//��Ⱑ ��� ���� ����
		cout << e * (b - a) << '\n';
	else//��Ⱑ 0��
		cout << d + e * b << '\n';
}
