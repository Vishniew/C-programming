/*
Name: Kesari Vishnu
Description: WAP to implement your own islower() function
Date: 05-04-2023
Sample I/P: Enter the character: a
Sample O/P: Entered character is lower case alphabet
*/
#include <stdio.h>

int my_islower(int);         //Declaring the function                       

int main()
{
    char ch;                //Declaring variable ch
    int ret;                //Declaring variable ret
    
    printf("Enter the character: ");    //Asking the user to enter the chara    cter
    scanf("%c", &ch);       //Reading ch from user
    
    ret = my_islower(ch);   //Calling the function and storing

    if(ret == 1)            //Checking if ret = 1
    {
        printf("Entered character is lower case alphabet\n"); //Printing  character is lower case character
    }
    else
    {
        printf("Entered character is not lower case alphabet\n"); //Printing  character is lower case character
    }

    return 0;

}

int my_islower(int ch)      //Function definition
{
    if((97 <= ch) & (ch <= 122))  //Checking whether ch is lowercase or not
    {
        return 1;           //return 1 if condition is true
    }
    else
    {
        return 0;           //return 0 if condition is false
    }

}
