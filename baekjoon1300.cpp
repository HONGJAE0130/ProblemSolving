// 1300 ���� �̺� Ž�� K��° �� 
// ó���� �̺� Ž������ �𸣰� A ���͸� ����� B���Ϳ� ������ �ϰ� B[k]�� ����Ϸ��� �ϴϱ� �ð��ʰ��� �翬�� ���� �ۿ�
// ������. N�� 10^9 ������ Ŀ���� �� ������ ���Ʈ ������ Ǯ��������� ���� �ʾҴ�.
// �̺� Ž�� ��� low �� high �� ��� mid  �� ����
// ���� �迭�� ���� �� k���� � ��Ģ�� ������ �ִ��� ã�Ƴ��� ���� ���� ��������. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)

{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	int low = 1, high = K;			//B �迭�� [K] ���� ã�� ���̹� 1���� K������ ���� ��
	int result = -1;

	while (low <= high)
	{
		int cnt = 0;

		int mid = (low + high) / 2;
		for (int i = 1; i <= N; i++)
			cnt += min(mid / i, N); //mid���� ���� j�� ��(i * j <= mid)

		if (cnt < K)
			low = mid + 1;
		else
		{
			result = mid;
			high = mid - 1;
		}
	}
	cout << result << "\n";
	return 0;
}
