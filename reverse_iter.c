/*
Name: Kesari Vishnu
Description: WAP to reverse the given string using iterative method 
Date: 19-04-2023
Sample input: Enter a string : Hello World
Sample output: Reverse string is : dlroW olleH
*/
#include <stdio.h>

void reverse_iterative(char str[]);         //Function prototype

int main()
{
    char str[30];                           //String array
    
    printf("Enter any string : ");          //Printing the message
    scanf("%[^\n]", str);                   //Selective scanf
    
    reverse_iterative(str);                 //Calling the function
    
    printf("Reversed string is %s\n", str); //Printing the string
    
    return 0;
}

void reverse_iterative(char str[])          //Function definition
{
    int length = 0;                         //Initialising lenth as 0
    for(int i = 0; str[i] != '\0'; i++)     //Calculating length
    {
        length++;
    }
    char temp;                              //Declaring temp variable
    for(int j = 0; j < (length / 2); j++)   //Swapping the characters of string
    {
        temp = str[j];
        str[j] = str[(length-1)-j];
        str[(length-1)-j] = temp;
    }
}
