//백준 이분 탐색 문제를 하나 풀어보려다가
//계속 visual 에서는 입력 예제와 출력이 잘 나왔는데 백준사이트에서는 length error가 계속 나와서
//엄청난 수정을 거치고 오류 하나하나 디버깅 하다가
//결국 해결했습니다. 
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