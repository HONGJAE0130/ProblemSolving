//���� ��ǥ�������� �˾����� ������ ��� �������� ���� Ǯ����.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, answer;
	cin >> a >> b;

	int az = (a + 3) % 4;
	int bz = (b + 3) % 4;
	answer = abs(az - bz) + abs((b - 1) / 4 - (a - 1) / 4);
	cout << answer;
}