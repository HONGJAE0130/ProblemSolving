#include <iostream>

#include <string>

using namespace std;



int main(void)

{

	ios_base::sync_with_stdio(0);

	cin.tie(0);

	string A, B;

	char op;

	cin >> A >> op >> B;



	if (op == '+')

	{

		if (A.length() > B.length())

		{

			string result = A;

			int idx = A.length() - B.length();

			result[idx] = '1';

			cout << result << "\n";

		}

		else if (A.length() == B.length())

		{

			string result = A;

			result[0] = '2';

			cout << result << "\n";

		}

		else

		{

			string result = B;

			int idx = B.length() - A.length();

			result[idx] = '1';

			cout << result << "\n";

		}

	}

	else

	{

		int len = A.length() - 1 + B.length() - 1;

		string result = "1";

		for (int i = 0; i < len; i++)

			result += '0';

		cout << result << "\n";

	}

	return 0;

}
