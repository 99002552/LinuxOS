#include "mystring.h"

int mystrlen(char str[])
{
    int count=0,index=0;
    while(str[index]!='\0')
        count++;
    return count;
}
char* mystrcpy(char dest[],char source[])
{
    int index=0;
    while(source[index]!='\0')
    {
        dest[index] = source[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}
    // Function to implement strcat() function in C
char* my_strcat(char* destination, const char* source)
{
	// make ptr point to the end of destination string
	char* ptr = destination + mystrlen(destination);

	// Appends characters of source to the destination string
	while (*source != '\0')
		*ptr++ = *source++;

	// null terminate destination string
	*ptr = '\0';

	// destination is returned by standard strcat()
	return destination;
}
int mystrcmp(char str1[],char str2[])
{
    int index=0;
    while(str1[index]!='\0')
    {
        if(str1[index]!=str2[index])
            return 0;
    }
    return 1;
}
