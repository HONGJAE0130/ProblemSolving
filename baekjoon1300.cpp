// 1300 백준 이분 탐색 K번째 수 
// 처음에 이분 탐색인줄 모르고 A 벡터를 만들고 B벡터에 삽입을 하고 B[k]를 출력하려고 하니까 시간초과가 당연히 날수 밖에
// 없었다. N이 10^9 까지도 커지는 수 때문에 브루트 포스로 풀어버렸지만 되지 않았다.
// 이분 탐색 답게 low 와 high 를 잡고 mid  를 설정
// 이차 배열로 봤을 때 k값이 어떤 규칙을 가지고 있는지 찾아내는 것이 제일 문제였다. 

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

	int low = 1, high = K;			//B 배열의 [K] 값을 찾는 것이므 1부터 K사이의 사이 값
	int result = -1;

	while (low <= high)
	{
		int cnt = 0;

		int mid = (low + high) / 2;
		for (int i = 1; i <= N; i++)
			cnt += min(mid / i, N); //mid보다 작은 j의 수(i * j <= mid)

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
