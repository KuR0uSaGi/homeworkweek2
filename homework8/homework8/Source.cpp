#include<stdio.h>
int main()
{
	int h, m, a, sum,suma,sumb;
	printf("enter your hours :");
	scanf_s("%d", &h);
	printf("enter minutes :");
	scanf_s("%d", &m);
	if (h > 0)
	{
		a = h - 1;
		sum = a * 20;
		suma = sum + 50;
	}
	if (m > 0)
		sumb = suma + 20;

	printf("Parking fee =%d", sumb);
	return 0;
}