#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int L;
	cin >> L;
	int arr[50] = { 0 };
	for (int i = 0; i < L; i++) { cin >> arr[i]; }
	int N;
	cin >> N;										//n�� �����ϴ� ���� ���� 

	sort(arr, arr + L);								//���Ŀ켱

	int least = 1, large;
	for (int i = 0; i < L; i++) {
		if (N <= arr[i]) {							//N�� ������
			large = arr[i];							
			break;
		}
		least = arr[i] + 1;							//�ּҰ��� ã��
	}

	int cnt = 0;
	for (int i = least; i < large; i++) {			//�ּҺ��� N�� �����ϴ� �ִ밪���� ã��
		for (int j = i + 1; j < large; j++) {
			if (i <= N && N <= j) {					// i < N < J ������ ���� ������ ī��Ʈ
				cnt++;
			}
		}
	}

	cout << cnt;
}
