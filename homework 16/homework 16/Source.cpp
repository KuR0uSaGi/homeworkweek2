#include<stdio.h>
int swap(int*, int*);

int main()
{
	int a, b;
	printf("enter number : ");
	scanf_s("%d %d", &a, &b);
	if (a >= 0 && b >= 0)
	{
		swap(&a, &b);
		printf("%d %d", a, b);
	}
	else printf("please enter number more or equal zero");
	return 0;
}
int swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	
	*y = temp;

	return 0;
}