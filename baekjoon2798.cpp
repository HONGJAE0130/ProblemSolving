#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M,A;
	vector <int> v;
	cin >> N >> M;
	int result = 0;
	for (int i = 0; i < N; i++) {	
		cin >> A;
		v.push_back(A);
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				if (v[i] + v[j] + v[k] <= M && M - (v[i] + v[j] + v[k]) < M - result)
				{
					result = v[i] + v[j] + v[k];
				}
			}
		}
	}
	cout << result;
}