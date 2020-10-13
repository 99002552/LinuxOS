#include "myutils.h"
int factorial(int num)
{
    /* Return -1 for negative numbers */
  if(num < 0)
    return -1;

  /* Return 1 for 0 */
  if(num == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return num * factorial(num-1);
}

int isPrime(int num)
{
        for(int i=2;i<=num/2;i++)
    {

       //checks whether the reminder is 0 or not
        //if 0, the given number is not a prime number

        if(num%i == 0)
           return 0;
    }
    return 1;
}
int isPalindrome(int num)
{
    int rev=0,rem,temp=num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    if(rev==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int vsum(int num,...)
{
    int sum=0;
    va_list valist;
    va_start(valist, num);

    for (int i=0;i<num;i++)
        sum += va_arg(valist, int);
    va_end(valist);
    return sum;
}
