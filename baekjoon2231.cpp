#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	int num;
	int sum;
	int part;

	cin >> num;

	for (int i = 1; i < num; ++i) {	//브루트 포스 중에서도 최소값이니까 1부터 탐색해서 조건에 맞는 값이 최소값
		sum = i;
		part = i;

		while (part) {				//분해합을 구하는 과정
			sum += part % 10;		//분해합 자리수 계속 더하기
			part /= 10;				//
		}
		if (num == sum) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;
}