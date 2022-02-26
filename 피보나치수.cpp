#include <string>
#include <vector>

using namespace std;
//평소에 생각하는 피보나치의 수 함수는 값이 커지면 시간초과가 나기가 쉽다.
/*
int fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return
		(fibo(n - 1) + fibo(n - 2));
}
*/
int solution(int n) {
	int answer = 0;
	//answer = fibo(n);

	//반복문을 이용해서 문제를 풀려고한다.
	int fibo[100001];//  2 <= n <= 100000 
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i <= n; i++) {
		fibo[i] = (fibo[i - 2] + fibo[i - 1]) %1234567;
	}
	answer = fibo[n];
	
	return answer;
}