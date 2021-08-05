#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		string line;
		stack<string> s;
		string temp;
		getline(cin, line);
		for (int j = 0; j <= line.length(); j++)
		{
			if (line[j] == ' ' || j == line.length()) {
				s.push(temp);
				temp.clear();
			}
			else temp.push_back(line[j]);
		}

		cout << "Case #" << i + 1 << ": ";
		while (!s.empty()) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << '\n';
	}
}