#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std;
int n, m;
vector<int> budget;
int main() {
	cin >> n;							//���� �Է�
	for (auto i = 0; i < n; i++) {		//
		int x;
		cin >> x;
		budget.push_back(x);			//���� �Է�
	}
	cin >> m;							//�� ����
	sort(budget.begin(), budget.end());	//���� ���� ��������
	int start = 0;						//Low
	int end = budget[n - 1];			//High
	int result, sum;
	while (start <= end)
	{
		sum = 0;						// �հ� 0���� �ʱ�ȭ
		int mid = (start + end) / 2;	// ������ �߰�
		for (auto i = 0; i < n; i++) {
			sum += min(budget[i], mid);	// mid �� �� ������ ���� �� �� ���� �� sum�� �ջ�
		} if (m >= sum)					//�� ����� SUM�� ���ؼ� ������ ���� ����
		{
			result = mid;				// ��տ��� 
			start = mid + 1;			// ��տ��� ���� 1+
		}
		else {							// ������ �����ϸ�
			end = mid - 1;				// mid -1
		}
	}
	cout << result;
}

