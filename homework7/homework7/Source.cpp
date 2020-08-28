#include <stdio.h>
int main() {
    int i, j, nam1, nam2;
    printf("Enter column : ");
    scanf_s("%d", &nam2);
    printf("Enter row : ");
    scanf_s("%d",&nam1);
    

    for (i = 1; i <= nam1; i++)
    {
        for (j = 1; j <= nam2; j++)
        {

            printf("*");

        }
        printf("\n");
    }
    return 0;
}