#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
#include <stdio.h>
#include <stdint.h>
int mystrlen(char str[]);
char* mystrcpy(char dest[],char source[]);
//char mystrcat(char dest[], char source[]);
char* my_strcat(char* destination, const char* source);
int mystrcmp(char str1[],char str2[]);


#endif // MYSTRING_H_INCLUDED
