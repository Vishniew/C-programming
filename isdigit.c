/*
Name: Kesari Vishnu
Description: WAP to implement your own isxdigit() function
Date: 04-04-2023
Sample I/P: Enter the character: a
Sample O/P: Entered character is an hexadecimal digit
*/

#include <stdio.h>

int is_xdigit(int);                          //Declaring the function

int main()
{
    char ch;                                //Declaring variable ch
    short ret;                              //Declaring variable ret

    printf("Enter a character:");          //Asking the user to enter a character
    scanf("%c", &ch);                       //Readind ch from user

    ret = is_xdigit(ch);                    //Calling the function and storing the returned value
    if(ret == 1)                            //Checking if ret = 1
    {
        printf("Entered character is an hexadecimal digit\n");  //Printing it is a hexadecimal
    }
    else
    {
        printf("Entered character is not an hexadecimal digit\n");  //Printing it is not a hexadecimal
    }
    return 0;
}

int is_xdigit(int ch)                       //Function defintion
{

    if(('0' <= ch) & (ch <= '9') | ('A' <= ch) & (ch <= 'F') | ('a' <= ch) & (ch <= 'f'))   //Checking whther ch is a hexdecimal or not
    {
        return 1;                           //Return 1 if conditon is true
    }       
    else
    {
        return 0;                           //Return 0 if conditon is  false
    }
}