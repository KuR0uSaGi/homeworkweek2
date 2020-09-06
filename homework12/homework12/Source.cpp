#include <stdio.h>
int maximum(int, int, int);
int main()
{
	int a, b, c;
	printf("Enter number : ");
	scanf_s(" %d %d %d", &a, &b, &c);
	if (a >= 0 && b >= 0 && c >= 0)
		printf("Maximum number is : % d\n", maximum(a, b, c));
	else printf("enter number more or equal zero");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}
