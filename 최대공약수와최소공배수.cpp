#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b, int greatCommonDivisor)
{
	return (a * b) / greatCommonDivisor;
}
vector<int> solution(int n, int m) {
	vector<int> answer;
	answer.push_back(gcd(n, m));
	answer.push_back(lcm(n, m, gcd(n, m)));
	return answer;
}