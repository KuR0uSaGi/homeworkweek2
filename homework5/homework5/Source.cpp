#include <stdio.h>
int main()
{
	int i;
	printf("enter number :");
	scanf_s("%d", &i);
	if (i < 0)
		printf("Error");
	else if (i % 2 == 0)
		 printf("even",i);
	else printf("odd",i);

	return 0;
}