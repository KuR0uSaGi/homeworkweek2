#include<stdio.h>
void scores(int, int);
int main()
{
    int x, y;
    struct Students
    {
        char name[10];
        int  snum;
        float  point;
    }st[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Your Name: ");
        scanf_s("%s", st[i].name, sizeof(st[i].name));

        printf("\nEnter Your Number: ");
        scanf_s("%d", &st[i].snum);
        
        printf("enter your score: ");
        scanf_s("%d %d", &x, &y);
        if (x || y < 15)
            printf("you got grade: F\n");
        else scores(x, y);

    }
    
    return 0;
}
void scores(int a,int b)
{
    int score;
    score = (a + b)/2;
    if (score >= 80)
        printf("you got grade: A");
    if (score >= 60)
        printf("you got grade: B");
    if (score >= 40)
        printf("you got grade: C");

}