#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int point;
	int tmp = 0;
	int result = 0;
	while (N--) {                    //N��ŭ �ݺ�        
		cin >> point;                //OX �� 1�� 0 �Է�
		if (point == 1) { tmp++; }     //�����Ͻ� tmp +1;
		else { tmp = 0; }             //�����Ͻ� tmp 0���� �ʱ�ȭ
		result += tmp;              //���� ����� tmp   
	}
	cout << result;

	return 0;
}