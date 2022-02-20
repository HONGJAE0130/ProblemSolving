#include <iostream>

using namespace std;
#define MAX 2000000

int H, A[MAX];

void maxHeapify(int i) {
	int l, r, largest;
	l = 2 * i;
	r = 2 * i + 1;
	//left , �ڽ� , right �ȿ��� �ִ밪�� �����Ѵ�.
	if (l <= H && A[l] > A[i]) largest = l;
	else largest = i;
	if (r <= H && A[r] > A[largest]) largest = r;

	//�ִ밪 largest �� i ��� ��Ʈ�� �ƴϸ� ��� ����
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