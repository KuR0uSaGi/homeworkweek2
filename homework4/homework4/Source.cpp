#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int level, row, star;
	scanf_s("%d", &level);
	for (row = 0; row < level; row++)
	{
		for (star = level - row; star > 0; star--)
		{
			printf("*");
		}
		printf("\n");
	}
}