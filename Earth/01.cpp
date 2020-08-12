#include <stdio.h>

int main()
{
	int x, y;
	int average, SD;
	int i = 0;
	scanf_s("%d%d", &x, &y);
	if (x > y)
	{
		while (x >= y)
		{
			printf_s("%d", x);
		}
	}
	return 0;
}