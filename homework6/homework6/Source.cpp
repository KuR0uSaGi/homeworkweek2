#include <stdio.h>
int main()
{
	int i;
	printf("enter number :");
	scanf_s("%d", &i);
	if (i < 0)
		printf("Please insert the number that is greater or equal zero");
	else if (i >= 50)
		printf("Pass");
	else printf("Fail");
	return 0;
}