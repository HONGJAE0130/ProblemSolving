//백준 1225 쉬운 문제였지만 나는 stoi가 가장 먼저 떠올랐기에 계속 풀어보려고 노력했다. 
// 이게 정수 자리가 10000자리가 넘어가는 곱셈이라 N^2의 복잡도로는 풀기가 불가능해
// sum을 int -> longlong 으로 바꿨고 stoi(A[i]) 를 A[i]- ' 0 ' 로바꿨다. 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	cin >> A >> B;
	long long sum = 0;
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			sum += (A[i] - '0') * (B[j] - '0');
		}
	}


	cout << sum;
}