/*
Name: Kesari Vishnu
Description: WAP to implement atoi function
Date: 19-04-2023
Sample input: Enter a numeric string: -12345
Sample output: String to integer is -12345
*/
#include <stdio.h>

int my_atoi(const char *str);                           //Function Prototype

int main()
{
    char str[20];                                       //Character array
    
    printf("Enter a numeric string : ");                //Printing the message
    scanf("%s", str);                                   //Reading the string
    printf("String to integer is %d\n", my_atoi(str));  //Priting the sring to integer value
    return 0;
}
int my_atoi(const char *str)                            //Function definition
{
    int result = 0, digit = 0, flag = 0 ;               //Initialising the variables result, digit, flag as 0
    int i = 0;                                          //Initialising the variable i as 0
    if(str[0] == '-' && (48 <= str[1] <= 57))           //Checking if 1st elements is '-' charcter and 2nd element is number
    {
        flag = -1;                                      //Updating flag to -1
        i = 1;                                          //Updating i to 1
    } 
    else if(str[0] == '+' && (48 <= str[1] <= 57))      //Checking if 1st elements is '+' charcter and 2nd element is number
    {
        flag = 1;                                       //Updating flag to 1
        i = 1;                                          //Updating i to 1
    }
    else if(48 <= str[0] <= 57)                         //Checking if 1st elements is number
    {
        flag = 1;                                       ////Updating flag to 1
    }
    else
    {
        return 0;
    }
    
    for(i ; str[i] != '\0' && (48 <= str[i] && str[i] <= 57); i++)  //Converting characters to digits
    {
        digit = (str[i] - 48);
        result = (result * 10) + digit;
    }
    
    
    return (result*flag);                                           //Returning the result * flag
}
