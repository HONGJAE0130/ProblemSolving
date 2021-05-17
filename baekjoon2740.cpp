#include <iostream>
using namespace std;

int A[101][101];
int B[101][101];
int C[100][100];
int main()
{
	int a, b, c;
	int i = 0;
	int j = 0;
	cin >> a >> b;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++)
		{
			cin >> A[i][j];
		}
	}
	cin >> b >> c;
	for (i = 0; i < b; i++) {
		for (j = 0; j < c; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < a; i++)
		for (int j = 0; j < c; j++)
			for (int k = 0; k < b; k++)
				C[i][j] += (A[i][k] * B[k][j]);
	for (int i = 0; i < a; i++)

	{

		for (int j = 0; j < c; j++)

			cout << C[i][j] << " ";

		cout << "\n";

	}
	return 0;
}
