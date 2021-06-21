
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
	int answer = 0;
	int count = 0;
	int count1 = 0;
	vector<int> v;
	vector<int> k;
	int num = n;
	while (n != 0) {
		v.push_back(n % 2);
		if (n % 2 == 1) count++;
		n = n / 2;
	}
	num++;

	while (1)
	{
		n = num;
		while (n != 0) {
			k.push_back(n % 2);
			if (n % 2 == 1) count1++;
			n = n / 2;
		}
		if (count == count1) {
			answer = n;
			break;
		}
		num++;
		count1 = 0;
	}
	answer = num;
	return answer;
}

int main() {
	int k;
	cin >> k;
	solution(k);
}