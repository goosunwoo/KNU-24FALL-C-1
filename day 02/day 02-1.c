#include <stdio.h>
int main()
{
	int num;
	double n1, n2, n3 = 0;
	printf("원하는 기능을 입력하시오. \n");
	printf("1.더하기 2.빼기 3.곱하기 4.나누기 \n");
	printf("기능 :");
	scanf_s("%d", &num);
	printf("숫자 1을 입력하세요: ");
	scanf_s("%lf", &n1);
	printf("숫자 2을 입력하세요: ");
	scanf_s("%lf", &n2);
	if (num == 1)
	{
		n3 = n1 + n2;
	}
	else if (num == 2)
	{
		n3 = n1 - n2;
	}
	else if (num == 3)
	{
		n3 = n2 * n1;
	}
	else if (num == 4)
	{
		n3 = n1 / n2;	
	}
	else
		printf("잘못된 숫자입니다. \n");
	printf("답: %lf", n3);
	return 0;
}