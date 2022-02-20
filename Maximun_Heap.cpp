#include <iostream>

using namespace std;
#define MAX 2000000

int H, A[MAX];

void maxHeapify(int i) {
	int l, r, largest;
	l = 2 * i;
	r = 2 * i + 1;
	//left , 자신 , right 안에서 최대값을 선택한다.
	if (l <= H && A[l] > A[i]) largest = l;
	else largest = i;
	if (r <= H && A[r] > A[largest]) largest = r;

	//최대값 largest 가 i 라는 루트가 아니면 계속 스왑
	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}
}
int main() {
	cin >> H;

	for (int i = 1; i <= H; i++) cin >> A[i];

	for (int i = H / 2; i >= 1; i--) maxHeapify(i);

	for (int i = 1; i <= H; i++) {
		cout << " " << A[i];
	}
	cout << "\n";
}