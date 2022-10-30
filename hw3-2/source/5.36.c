#include <stdio.h>

void hanoi_tower(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk1 from rod %c to rod %c", from_rod, to_rod); // A to C
		return;
	}
	hanoi_tower(n - 1, from_rod, aux_rod, to_rod);
	printf("\n Move disk%d from rod %c to rod %c", n, from_rod, to_rod); // A to B
	hanoi_tower(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n;
	printf("Enter number of disk:");
	scanf("%d", &n);
	hanoi_tower(n, 'A', 'C', 'B');
	return 0;
}