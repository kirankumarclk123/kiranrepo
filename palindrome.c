#include <stdio.h>
void polin()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    printf("\n Enter an integer:\n ");
    scanf("%d", &n);
    originalInteger = n;
    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome\n.", originalInteger);
    else
        printf("%d is not a palindrome\n.", originalInteger);
    
 
}
