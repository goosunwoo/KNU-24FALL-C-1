#include <stdio.h>
int main()
{
	int num;
	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 4 == 0 || num % 7 == 0)
			printf("%d \n", num);
	}
	return 0;
}