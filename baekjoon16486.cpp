//16486 ���� ��� 1 ����
//�� �� * 2 + �ݿ� 2�� �Ҽ��� 6�ڸ������ϱ� ���̵� 6��°�ڸ����� �Է�
//cout<< ���ٴ� printf �� %.6f�� ���ؼ�  f �� double ��� , .6 �� 6��°�ڸ����� ����Ѵ�

#include <iostream>
#define PI 3.141592

using namespace std;
int main() {
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.6f\n", d1 * 2 + 2 * PI * d2); //�� 2�� + 2 * (�ݿ�)
}
