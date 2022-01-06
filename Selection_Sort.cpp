#include <iostream>
using namespace std;

int selection_sort(int A[], int N) {
	int i, j, t, sw = 0, minj;
	for (i = 0; i < N; i++) {
		minj = i;

		for (j = i; j < N; j++) {
			if (A[j] < A[minj]) 
				minj = j;				//각각의 반복 처리에서 i번째 부터 N-1번째 까지의 최소값 위치 minj
		}

		//swap(A[i],A[minj]);			//std에서는  swap함수를 지원한다. 
		t = A[i];						//위치를 
		A[i] = A[minj];					//바꾸는
		A[minj] = t;					//함수
		if (i != minj) sw++;
	}
	return sw;
}

int main() {
	int A[101];
	int N,sw;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sw=selection_sort(A, N);

	for (int i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << sw;
}