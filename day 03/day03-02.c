#include <stdio.h>
int factorial(a)
{
	int num, num1;
	for (num = 1; num < a; num++)
	{
		a = a * num;
		return a;
	}
}
int main()
{
	int a, b;
	printf("계산할 팩토리얼 값 입력: ");
	scanf_s("%d", &a);
	
	printf("a! = %d", factorial(a));
}