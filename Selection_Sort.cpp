#include <iostream>
using namespace std;

int selection_sort(int A[], int N) {
	int i, j, t, sw = 0, minj;
	for (i = 0; i < N; i++) {
		minj = i;

		for (j = i; j < N; j++) {
			if (A[j] < A[minj]) 
				minj = j;				//������ �ݺ� ó������ i��° ���� N-1��° ������ �ּҰ� ��ġ minj
		}

		//swap(A[i],A[minj]);			//std������  swap�Լ��� �����Ѵ�. 
		t = A[i];						//��ġ�� 
		A[i] = A[minj];					//�ٲٴ�
		A[minj] = t;					//�Լ�
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