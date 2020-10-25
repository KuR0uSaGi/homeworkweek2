#include <stdio.h>

int Factorial(int);
int Number, Number2;
int main()
{
    

    if (Number >= 0 && Number2>=0) 
    {
        printf("input your number : ");
        scanf_s("%d %d", &Number, &Number2);
        Factorial(Number);
        printf("Factorial1 is %d\n", Factorial(Number));
        printf("Factorial2 is %d\n", Factorial(Number2));
        
        if (Factorial(Number) > Factorial(Number2))
            printf("number1 more than number2");
        else
            if (Factorial(Number) < Factorial(Number2))
                printf("number2 more than number1");
            else
                if (Factorial(Number) == Factorial(Number2))
                    printf("number1  and number2 are equal");


        
    }
    return 0;
}

int Factorial(int n)
{
    int result = 1, i;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}