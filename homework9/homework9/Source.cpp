#include<stdio.h>
int main()
{
	int a, b, z;
	printf("enter number :");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	z = a+b;
	if (z > 0)
		printf("a+b>0");
	else if (z == 0)
		printf("a + b = 0");
	else printf("a + b < 0");
	return 0;
}