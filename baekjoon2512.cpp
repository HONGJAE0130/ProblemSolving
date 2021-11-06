#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std;
int n, m;
vector<int> budget;
int main() {
	cin >> n;							//도시 입력
	for (auto i = 0; i < n; i++) {		//
		int x;
		cin >> x;
		budget.push_back(x);			//예산 입력
	}
	cin >> m;							//총 예산
	sort(budget.begin(), budget.end());	//예산 정렬 오름차순
	int start = 0;						//Low
	int end = budget[n - 1];			//High
	int result, sum;
	while (start <= end)
	{
		sum = 0;						// 합계 0으로 초기화
		int mid = (start + end) / 2;	// 예산의 중간
		for (auto i = 0; i < n; i++) {
			sum += min(budget[i], mid);	// mid 와 각 도시의 예산 비교 중 작은 것 sum에 합산
		} if (m >= sum)					//총 예산과 SUM의 비교해서 예산이 남아 돌면
		{
			result = mid;				// 평균예산 
			start = mid + 1;			// 평균예산 보다 1+
		}
		else {							// 예산이 부족하면
			end = mid - 1;				// mid -1
		}
	}
	cout << result;
}

