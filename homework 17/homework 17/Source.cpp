#include<stdio.h>
void func(int);

int b;
int main()
{
	
	int x,z;
	printf("enter number :");
	scanf_s("%d", &x);
	if (x>=0&&x<=32767)
	func(x);
	printf("%d",b);
	z = b;
	if (z > 10 && z >= 0)
	{
		func(z);
		printf("->%d", b);
	}
	else
	return 0;
}
void func(int a)
{
	int sum = 0;
	while (a > 0)
	{

		sum += a % 10;
		a /= 10;
		b = sum;
	}
}
