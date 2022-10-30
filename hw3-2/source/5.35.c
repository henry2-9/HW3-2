#include <stdio.h.>

void fibonacci(int);

int main()
{
	int  number;
	printf("Enter the number of element:");
	scanf_s("%d", &number);
	
	fibonacci(number);

	system("pause");
	return 0;
}

void fibonacci(int number)
{
	int n1 = 0, n2 = 1, n3;

	printf("\n%d,%d", n1, n2);


	for (int i = 2; i < number; ++i)
	{
		n3 = n1 + n2;
		printf(",%d", n3);
		n1 = n2;
		n2 = n3;
	}
}