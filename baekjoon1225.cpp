//���� 1225 ���� ���������� ���� stoi�� ���� ���� ���ö��⿡ ��� Ǯ����� ����ߴ�. 
// �̰� ���� �ڸ��� 10000�ڸ��� �Ѿ�� �����̶� N^2�� ���⵵�δ� Ǯ�Ⱑ �Ұ�����
// sum�� int -> longlong ���� �ٲ�� stoi(A[i]) �� A[i]- ' 0 ' �ιٲ��. 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	long long sum = 0;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			sum += (A[i] - '0') * (B[j] - '0');
		}
	}


	cout << sum;
}