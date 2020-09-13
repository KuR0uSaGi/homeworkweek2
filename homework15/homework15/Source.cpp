#include<stdio.h>
int main() {
	int data[] = { 10,20,30,40,50 };
	int* ptr = &data[0];
	int x, y;
	printf("enter number :");
	scanf_s("%d %d", &x, &y);
	if (x > y && x > 0)
	{
		printf("%d \n", *(ptr) / x);
		printf("%d \n", *(ptr + 1) / x);
		printf("%d \n", *(ptr + 2) / x);
		printf("%d \n", *(ptr + 3) / x);
		printf("%d \n", *(ptr + 4) / x);
	}
	if (x < 0 && y < 0)
		printf("put number more than zero");
	if(y>x && y>0)
	{
		printf("%d \n", *(ptr) / y);
		printf("%d \n", *(ptr + 1) / y);
		printf("%d \n", *(ptr + 2) / y);
		printf("%d \n", *(ptr + 3) / y);
		printf("%d \n", *(ptr + 4) / x);
	}
	if(y==x && x>0 &&y>0)
	{
		printf("%d \n", *(ptr) / x);
		printf("%d \n", *(ptr + 1) / x);
		printf("%d \n", *(ptr + 2) / x);
		printf("%d \n", *(ptr + 3) / x);
		printf("%d \n", *(ptr + 4) / x);
	}
	return 0;
}