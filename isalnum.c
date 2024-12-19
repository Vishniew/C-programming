/*
Name: Kesari Vishnu
Description: WAP to implement your own isalnum() function
Date: 04444-04-2023
Sample I/P: Enter the character: a
Sample O/P: The character 'a' is an alnum character.
*/
#include <stdio.h>

int my_isalnum(int);                    //Declaring the function

int main()
{
    char ch;                            //Declaring variable ch
    int ret;                            //Declaring variable ret
    
    printf("Enter the character: ");    //Asking the user to enter the character
    scanf("%c", &ch);                   //Reading ch from user
    
    ret = my_isalnum(ch);               //Calling the function and storing
    if(ret == 1)                        //Checking if ret = 1
    {
        printf("Entered character is alphanumeric character\n");   //Printing  character is alnum character
    }
    else
    {
        printf("Entered character is not alphanumeric character\n");   //Printing  character is not alnum character
    }
    return 0;
}

int my_isalnum(int ch)                  //Function definition
{
    if((65 <= ch) & (ch <= 90) || (97 <= ch)  & (ch <= 122) || (48 <= ch) & (ch <= 57) )    //Checking whether ch is alnum or not 
    {
        return 1;                       //return 1 if condition is true
    }
    else
    {
        return 0;                       //return 0 if condition is false
    }
}
