#include<stdio.h>
int function(int,int*);

int main() {
	int data[] = { 10,20,30,40,50 };
	int* ptr = &data[0];
	int a, b;
	printf("enter number :");
	scanf_s("%d %d", &a, &b);
	if (a > b && a > 0)
	{
		function(a,ptr);
	}
	if (a < 0 && b < 0)
		printf("put number more than zero");
	if(b>a && b>0)
	{
		function(b,ptr);
	}
	if(a==b && a>0 &&b>0)
	{
		function(a,ptr);
	}
	
}
int function(int x,int* y) 
{
	printf("%d \n", *(y) / x);
	printf("%d \n", *(y + 1) / x);
	printf("%d \n", *(y + 2) / x);
	printf("%d \n", *(y + 3) / x);
	printf("%d \n", *(y + 4) / x);
	return 0;
}
