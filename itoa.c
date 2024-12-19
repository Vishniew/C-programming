/*
Name: Kesari Vishnu
Description: WAP to implement itoa function
Date:19-04-2023
Sample i/p: Enter the number : 1234
Sample o/p: Integer to string is 1234
*/

#include <stdio.h>

int itoa(int num, char str[]);                  //Function prototype

int main() 
{
    int num;                                    //Variable declaration
    char str[10];                               //Modifiable string declaration

    printf("Enter the number:");                //Printing the message
    if( scanf("%d", &num))                       //Reading the num and checking 
    {

        itoa(num, str);                             //Function call

        printf("Integer to string is %s", str);     //Printing the string
    }

    else
    {
        printf("Integer to string is 0");           //Printing the message
    }
    return 0;
}
    

int itoa(int num, char str[])                   //Function definition
{
    int start = 0;                              //Initialising Variable start with 0
    int i = 0, rev = 0, digit = 0;                      //Initialising Variables i, rev, digit with 0
    if(num < 0)                                 //Checking if num is -ve
    {
        num = -num;                             //Making that number -ve
	    start = 1;                                //Making start as 1
	    str[0] = '-';                             //Assigning first index of str '-' character
    }
    while(num!=0)                                //While loop for reversing the number
    {
       digit = num % 10;
       rev=rev * 10 + digit;
       num = num / 10;
       i++;
    }
    int hi=0;
    for(int j = start; rev != 0; j++)            //Updating elements into string
    {
        int c = rev % 10;
        str[j] = (c+48);
        rev = rev/10;
        hi = j;

    }
    str[hi + 1] = '\0';                         //Updating last element to null character
}
