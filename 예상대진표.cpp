#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
	int answer = 0;
	while (b - a != 0)
	{
		a = (a + 1) >> 1; //2���� �¸��ϸ� 1�� �ο� 0010 -> 0011 -> 0001
		b = (b + 1) >> 1; //3���� �¸��ϸ� 2�� �ο� 0011 -> 0100 -> 0010
		answer++;
	}

	return answer;
}