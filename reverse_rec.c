/*
Name: Kesari Vishnu
Description: WAP to reverse the given string using recursive method
Date: 19-04-2023
Sample input: Enter a string : Hello World
Sample output: Reverse string is : dlroW olleH
*/
#include <stdio.h>

void reverse_recursive(char str[], int ind, int len);   //Function prototype
int my_strlen(char str[]);                              //Function prototype
int main()
{
    char str[30];                                       //Declaring String array
    
    int index = 0;                                      //Initialising index as 0
    printf("Enter a string : ");                      //Printing the message
    scanf("%[^\n]", str);                               //Selective scanf
    int len = my_strlen(str);                           //Calling string length function
    reverse_recursive(str, index, len);                 //Calling the function
    
    printf("Reversed string is : %s\n", str);             //Printing the reversed string
}
int my_strlen(char str[])                               //Function definition 
{
    int length = 0;                                     //Initialising length as 0
    for(int i = 0; str[i] != '\0'; i++)                 //Calculating the length
    {
        length++;                                       //Incrementing length
    }
    return length;                                      //Returning length
}


void reverse_recursive(char str[], int ind, int len)    //Function definition
{
    char temp;                                          //Declaring temp variable
    if(ind != (len / 2))                                //Swapping the characters of string
    {
        temp = str[ind];
        str[ind] = str[(len - 1)-ind];
        str[(len - 1)-ind] = temp;
        ind++;
        reverse_recursive(str, ind, len);              //Recursive calling
    }
}
