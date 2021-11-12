#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int N;
stack<int> s;
int ans[1000001];
int seq[1000001];

int main()
{
	cin >> N;
	// 수열 입력받기
	for (int i = 0; i < N; i++)
		cin >> seq[i];

	for (int i = N - 1; i >= 0; i--)						//수열은 
	{
		while (!s.empty() && s.top() <= seq[i])				//스택 top이 수열보다 작으면 pop
			s.pop();

		if (s.empty()) ans[i] = -1;							//while 문을 다  돌고 나서 s가 비었으면 오른쪽에 큰 수가 없다는 것이다. -1
		else ans[i] = s.top();								//empty가 아니면 s.top() 이 ans[i] 다.

		s.push(seq[i]);
	}

	// 정답 출력
	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}