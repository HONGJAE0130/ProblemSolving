#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> card;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		card.push(i);
	}
	while (card.size() > 1)
	{
		card.pop();
		int top = card.front();
		card.pop();
		card.push(top);
	}

	cout << card.front();

	return 0;
}