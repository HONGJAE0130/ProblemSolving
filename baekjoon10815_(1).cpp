//���� �̺� Ž�� ������ �ϳ� Ǯ����ٰ�
//��� visual ������ �Է� ������ ����� �� ���Դµ� ���ػ���Ʈ������ length error�� ��� ���ͼ�
//��û�� ������ ��ġ�� ���� �ϳ��ϳ� ����� �ϴٰ�
//�ᱹ �ذ��߽��ϴ�. 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A.begin(), A.end());
	int M;
	cin >> M;

	vector<int> check(M);
	for (int i = 0; i < M; i++)
		cin >> check[i];


	for (int i = 0; i < M; i++) {
		int low = 0;
		int high = N - 1;
		bool none = false;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (check[i] == A[mid]) {
				none = true;
				break;
			}
			else if (check[i] < A[mid]) high = mid - 1;
			else if (check[i] > A[mid]) low = mid + 1;
		}
		if (!none)
			cout << 0 << " ";
		else
			cout << 1 << " ";
	}

}