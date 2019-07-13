#include <stdio.h>
void factorial1()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an Numbers: ");
    scanf("%d",&n);
    
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
}
