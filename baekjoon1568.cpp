#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int answer = 1;
	int cnt = 0;
	while (N != 0) {
		if (N < answer)
			answer = 1;
		N -= answer;
		answer++;
		cnt++;
	}
	cout << cnt << endl;
}