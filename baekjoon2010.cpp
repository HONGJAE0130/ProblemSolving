#include <iostream>
using namespace std;

const int MAX = 500000;

int N;
int multitap[MAX];

int maxComputer(void)
{

	int result = multitap[0]; //ù ��Ƽ���� �ٸ� ��Ƽ���� �� �Ⱦ��������Ƿ� ��� �÷��� ��� ����
	for (int i = 1; i < N; i++)
	{
		result -= 1; //���� ��Ƽ�� �÷��� �� �ϳ��� ���� ��Ƽ���� �Ⱦƾ��ϹǷ�
		result += multitap[i]; //���� ��Ƽ�� �÷��� ����ŭ ���� �� �ִ�
	}
		
	return result;
}




int main(void)

{

	cin >> N;

	for (int i = 0; i < N; i++)

		cin >> multitap[i];
	cout << maxComputer() << endl;
	return 0;
}


