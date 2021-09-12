#include <string> 
#include <iostream> 
using namespace std;
string solution(int n) {
	string answer = "";
	char end[3] = { '4','1','2' };

	while (n > 0) {

		int r = n % 3; // 1. 주어진 자연수 n을 3으로 나눠 나머지를 구한다. (n>0) 

		answer = end[r] + answer; //위에서 구한 나머지로 124 나라 숫자의 끝자리를 구해서 앞에 더한다. (끝 자리 규칙) 

		n = (n - 1) / 3; // n의 값을 (n-1)/3으로 대체한 후 위 과정을 되풀이 한다. (3제곱 규칙)

	}
	cout << n;

	return answer;
}