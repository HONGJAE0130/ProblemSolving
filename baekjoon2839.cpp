#include <stdio.h>

int main() {

	int n, result = 0;

	for (scanf("%d", &n); ; n -= 3, result++)
	{
		if (n == 0) break;

		if (n % 5 == 0)
		{
			result += n / 5;
			break;
		}
		if (n < 0)
		{
			result = -1;
			break;
		}
	}

	printf("%d\n", result);

	return 0;
}