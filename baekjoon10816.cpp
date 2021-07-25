#include <unordered_map>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int M;
	int a;
	int b;
	cin >> N;
	unordered_map <int, int> card;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		card[a]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> b;
		cout << card[b] << " ";
	}

}

