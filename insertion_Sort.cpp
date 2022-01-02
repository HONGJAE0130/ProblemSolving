#include <iostream>
using namespace std;


void Insert_sort(int A[], int N) {
	for (int i = 0; i < N; i++) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
	}
}

int main() {
	int N;
	cin >> N;
	int A[100];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	Insert_sort(A, N);
	for (int i = 0; i < N; i++) {
		cout << A[i]<<" ";
	}


	system("pause");
}