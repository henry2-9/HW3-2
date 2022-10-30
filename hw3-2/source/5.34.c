#include <stdio.h>

int power(int, int);

int main()
{
	int base, a, result;
	printf("Enter base number:");
	scanf("%d", &base);
	printf("Enter positive power number:");
	scanf("%d", &a);
	result = power(base, a);
	printf("%d^%d = %d", base, a, result);

	system("pause");
	return 0;
}

int power(int base, int a)
{
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return 1;
}