#include <iostream>

using namespace std;

int main()
{
	for (int i = 6; i <= 100; i++)
	{
		for (int a = 2; a < i; a++)
		{
			for (int b = a + 1; b < i; b++)
			{
				for (int c = b + 1; c < i; c++)
				{
					if (i*i*i == a * a*a + b * b*b + c * c*c)
						cout << "Cube = " << i << ", Triple = (" << a << ',' << b << ',' << c << ")\n";
				}
			}
		}
	}

	return 0;
}