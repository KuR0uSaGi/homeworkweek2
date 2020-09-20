#include<stdio.h>
void drawsquare(int);
int main()
{
    int a;
    printf("Enter number : ");
    scanf_s("%d", &a);
    if (a > 0)
        drawsquare(a);
    else printf("please input number more than zero");
    return 0;
}
void drawsquare(int input)
{
    int i, j;
    for (i = 0; i < input; i++)
    {
        for (j = 0; j < input; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}