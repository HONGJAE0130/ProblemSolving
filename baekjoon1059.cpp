#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int L;
	cin >> L;
	int arr[50] = { 0 };
	for (int i = 0; i < L; i++) { cin >> arr[i]; }
	int N;
	cin >> N;										//n을 포함하는 좋은 구간 

	sort(arr, arr + L);								//정렬우선

	int least = 1, large;
	for (int i = 0; i < L; i++) {
		if (N <= arr[i]) {							//N이 작으면
			large = arr[i];							
			break;
		}
		least = arr[i] + 1;							//최소값을 찾기
	}

	int cnt = 0;
	for (int i = least; i < large; i++) {			//최소부터 N을 포함하는 최대값까지 찾고
		for (int j = i + 1; j < large; j++) {
			if (i <= N && N <= j) {					// i < N < J 범위의 수가 있으면 카운트
				cnt++;
			}
		}
	}

	cout << cnt;
}
