#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sum(int num)
{
	int x = 0, result = 0;
	int* pnum;
	int i;


	pnum = (int*)malloc(num * sizeof(int));

	if (x == 0)
	{
		if (pnum == NULL)
		{
			printf("Memory allocation failed\n");
		}

		else
		{
			for (i = 0; i < num; i++)
			{
				*(pnum + i) = 0;
				printf("num[%d] =", i + 1);
				scanf_s("%d", &pnum[i]);
				result = result + *(pnum + i);
			}
			printf("Summation of you number is %d\n", result);
			free(pnum);

		}
	}
}
int main()
{
	int x;
	printf("This is summation program\n");
	printf("How many number do you like to make sum : ");
	scanf_s("%d", &x);
	sum(x);
	return 0;
}