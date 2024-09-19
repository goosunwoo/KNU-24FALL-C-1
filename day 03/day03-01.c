#include <stdio.h>


int primenumber(int a)
{
	int num;
	float i;
	for (num = 2; num < a; num++)
	{
		i = a % num;
		if (i == 0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int a, b;
	printf("소수인지 확인할 수를 입력하세요: ");
	scanf_s("%d", &a);
	if (a < 1)
	{
		printf("양수를 입력해 주세요");
	}
	if (a == 1)
	{
		printf("해당 수는 소수가 아닙니다.");
	}
	else 
	{
		
		b= primenumber(a);
		if (b == 0)
		{
			printf("해당 수는 소수가 아닙니다.");
		}
		else if (b == 1)
		{
			printf("해당 수는 소수입니다. ");
		}
	}
	return 0;
}