//����2965 Ļ�ŷ� �� ����
//������ ���� ��������
//������ ���鼭 ���� �����ϴ� ���� �ٷ� ���Դ�.
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(b - a, c - b) - 1;
}