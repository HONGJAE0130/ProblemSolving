#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int num;
	int sum;
	int part;

	cin >> num;

	for (int i = 1; i < num; ++i) {	//���Ʈ ���� �߿����� �ּҰ��̴ϱ� 1���� Ž���ؼ� ���ǿ� �´� ���� �ּҰ�
		sum = i;
		part = i;

		while (part) {				//�������� ���ϴ� ����
			sum += part % 10;		//������ �ڸ��� ��� ���ϱ�
			part /= 10;				//
		}
		if (num == sum) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}