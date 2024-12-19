/*
Name: Kesari Vishnu
Description: WAP to define a macro SIZEOF(x), without using sizeof operator
Date: 15-05-2023
Sample input:  ./sizeof
Sample output:  Size of int : 4 bytes
                Size of short : 2 bytes
                Size of char : 1 byte
                Size of float : 4 bytes
                Size of double : 8 bytes
                Size of unsigned int : 4 bytes
                Size of signed int : 4 bytes
                Size of long int : 8 bytes
                Size of long double : 16 bytes
                Size of long long int : 8 bytes
                
*/
#include<stdio.h>
#define SIZEOF(x) (char *)(&x+1) - (char *)&x       //Macro for SIZEOF(x)
int main()
{
    /*Declaration of variables with different data types*/
    
    char a;
    short b;
    int c;
    float d;
    long int e;
    double f;
    long double g;
    unsigned int h;
    signed int i;
    long long int j;
    /*Printing the data types and their sizes*/

    printf("Size of char: %ld bytes\n",SIZEOF(a));
    printf("Size of short: %ld bytes\n",SIZEOF(b));
    printf("Size of int: %ld bytes\n",SIZEOF(c));
    printf("Size of float: %ld bytes\n",SIZEOF(d));
    printf("Size of long int: %ld bytes\n",SIZEOF(e));
    printf("Size of double: %ld bytes\n",SIZEOF(f));
    printf("Size of long double: %ld bytes\n",SIZEOF(g));
    printf("Size of unsigned int: %ld bytes\n",SIZEOF(h));
    printf("Size of signed int: %ld bytes\n",SIZEOF(i));
    printf("Size of long long int: %ld bytes\n",SIZEOF(j));

    return 0;
}
