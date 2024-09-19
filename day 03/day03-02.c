#include <stdio.h>
int factorial(int a)
{
	int num;
	if (a == 0 || a == 1)
		return 1;
	num = a * factorial(a - 1);
}
int main()
{
	int a, b;
	printf("계산할 팩토리얼 값 입력: ");
	scanf_s("%d", &a);
	factorial(a);
	printf("%d! = %d", a, factorial(a));
	return 0;
}
