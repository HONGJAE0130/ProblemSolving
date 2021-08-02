#include <iostream>
#include <stack>

using namespace std;
stack<int> stick;
int N;
int main()
{
	int count = 0;
	int max = 0;
	cin >> N;
	while (N--)
	{
		int a;
		cin >> a;
		stick.push(a);
	}
	while (stick.size())
	{
		if (max < stick.top())
		{
			max = stick.top();
			count++;
		}
		stick.pop();
	}
	cout << count;
}

