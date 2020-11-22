#include<stdio.h>
#include<conio.h>
#include<string.h>
void arrange()
{
	char str[80], tmp;
	char* p = str;
	int i, j;
	printf("Enter word : ");
	gets_s(str);
	for (i = 0; i < strlen(str) - 1; i++)
	{
		for (j = i + 1; j <= strlen(str) - 1; j++)
		{
			if (*(p + i) > * (p + j))
			{
				tmp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = tmp;
			}
		}
	}

	printf("Your word( sort by character ) is : %s\n", str);

}
int main()
{
	arrange();


	return 0;
}