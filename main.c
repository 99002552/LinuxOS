#include "myutils.h"
#include "mystring.h" 
#include "bitmask.h"
#include <stdlib.h>
int main()
{
    int number1 = 201;
    int a=10,b=20,c=14;
    int prime,palin,facto;
    char mystr[]= "Santhosh Kumar";
   //char des[]="";
   char* des = (char*)calloc(100, 1);
   char* str = (char*)calloc(100, 1);
    //Prime
    prime = isPrime(number1);
    if(prime)
        printf("Is %d a Prime number: YES\n",number1);
    else
        printf("Is %d a Prime number: NO\n",number1);
        
    //Palindrome    
    palin = isPalindrome(number1);
    if(palin)
        printf("Is %d a Palindrome: YES\n",number1);
    else
        printf("Is %d a Palindrome: NO\n",number1);
    
    number1 = 4;
    
    //Factorial
    facto = factorial(number1);
    printf("Factorial of %d is %d\n",number1,facto);
    
    
    //Sum
    printf("Sum %d + %d + %d = %d\n",a,b,c,vsum(3,a,b,c));
    
    
    // Bitmasking
    uint8_t number = 20;
    int pos =5;
    
    //Set
    uint8_t result = setbit(number,pos);
    printf("Set bit position %d of number %d:: %d\n",pos,number,result);
	
    pos = 6;
    //Reset	
    result = resetbit(number,pos);
    printf("Reset bit position %d of number %d:: %d\n",pos,number,result);
    
    pos = 4;
    //Flip
    result = flipbit(number,pos);
    printf("Flip bit position %d of number %d:: %d\n",pos,number,result);
    
    pos = 3;
    //Query
   if(querybit(number,pos))
   	printf("Bit at %d of number %d is SET\n",pos,number);
   else
   	printf("Bit at %d of number %d is NOT SET\n",pos,number);   
   	
   	
   //Strings
   
   
   //String length
   int len = mystrlen(mystr);
   printf("Length of string is %d\n",len);
   
   //String copy
   mystrcpy(des,mystr);
   puts(des);
   
   //String Concat
   my_strcat(str, "Kadaveru ");
   my_strcat(str, "Santhosh ");
   
   //String compare
   if(mystrcmp(mystr,str))
   	printf("matched\n");
   else
   	printf("Not matched\n");	
     return 0;
}







