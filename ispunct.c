/*
Name: Kesari Vishnu
Description: WAP to implement your own ispunct() function
Date: 05-04-2023
Sample I/P: Enter the character: a
Sample O/P: Entered character is not punctuation character
*/
#include <stdio.h>

int my_ispunct(int);         //Declaring the function                       

int main()
{
    char ch;                //Declaring variable ch
    int ret;                //Declaring variable ret
    
    printf("Enter the character: ");    //Asking the user to enter the chara    cter
    scanf("%c", &ch);       //Reading ch from user
    
    ret = my_ispunct(ch);   //Calling the function and storing

    if(ret == 1)            //Checking if ret = 1
    {
        printf("Entered character is punctuation character\n"); //Printing  character is punctuation character
    }
    else
    {
        printf("Entered character is not punctuation character"); //Printing  character is not punctuation character
    }

    return 0;

}

int my_ispunct(int ch)      //Function definition
{
    if((33 <= ch) & (ch <= 47) | (58 <= ch)  & (ch <= 64) | (91 <= ch) & (ch <= 96) | (123 <= ch) & (ch <= 126))  //Checking whether ch is punctuation character or not
    {
        return 1;           //return 1 if condition is true
    }
    else
    {
        return 0;           //return 0 if condition is false
    }

}
