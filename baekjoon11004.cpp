#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);



	int N, A;
	cin >> N >> A;
	vector<int> AA;
	for (int i = 0; i < N; i++)
	{
		int e;
		cin >> e;
		AA.push_back(e);
	}
	sort(AA.begin(), AA.end());
	for (int i = 0; i < N; i++)
	{
		if (i != A - 1) continue;
		cout << AA[i];
	}
	return 0;
}