#include "myutils.h"

int main()
{
    int number = 201;
    int a=10,b=20,c=14;
    int prime,palin,facto;
    prime = isPrime(number);
    if(prime)
        printf("Is %d a Prime number: YES\n",number);
    else
        printf("Is %d a Prime number: NO\n",number);
    palin = isPalindrome(number);
    if(palin)
        printf("Is %d a Palindrome: YES\n",number);
    else
        printf("Is %d a Palindrome: NO\n",number);
    number = 4;
    facto = factorial(number);
    printf("Factorial of %d is %d\n",number,facto);

    printf("Sum %d + %d + %d = %d",a,b,c,vsum(3,a,b,c));
    return 0;
}
