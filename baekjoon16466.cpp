#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	int * A = new int[N];

	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A, A + N);
	int answer = 1;
	for (int i = 0; i < N; i++)
	{
		if (answer != A[i]) break;		
		for (int j = i + 1; j < N; j++)	
		{
			if (A[i] == A[j]) i = j;
			else break;
		}
		answer++;
	}
	cout << answer;
	delete[] A;
}