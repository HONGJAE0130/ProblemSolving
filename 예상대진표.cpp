#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
	int answer = 0;
	while (b - a != 0)
	{
		a = (a + 1) >> 1; //2번이 승리하면 1을 부여 0010 -> 0011 -> 0001
		b = (b + 1) >> 1; //3번이 승리하면 2를 부여 0011 -> 0100 -> 0010
		answer++;
	}

	return answer;
}