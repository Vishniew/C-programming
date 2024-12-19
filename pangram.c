/*
Name: Kesari Vishnu
Description: WAP to check given string is Pangram or not
Date: 14-04-2023
Sample input: Enter the string: The quick brown fox jumps over the lazy dog
Sample output: The Entered String is a Pangram String
*/
#include<stdio.h>

int pangram(char []);                                           //Function prototype
int main()
{
    char str[100];                                              //Declaring character array
    printf("Enter the string: ");                               //Printing the message
    scanf("%[^\n]",str);                                        //Selective scanf
    int ret = pangram(str);                                     //Calling the function
    if(ret == 1)                                                //Checking if ret value is 1
    {
        printf("The Entered String is a Pangram String\n");     //Printing Entered string is Pangram
    }
    else
    {
        printf("The Entered String is not a Pangram String\n"); //Printing Entered string is not a Pangram
    }
    return 0;
}


int pangram(char *str)                                          //Function definition
{
    char arr[26] = {0};                                         //Initialising character array with 0

    for(int i = 0; str[i] != '\0'; i++)                         //Running the outer loop
    {
        for(int j = 0; j < 26; j++)                             //Running the inner loop
        {
            if(str[i] == (j+65) || str[i] == (j+97) ) //Checking if character is present in alphabet array or not
            {
                arr[j] = 1;                                     //Updating array elements
            }
        }
    }
    int count = 0;                                              //Initialising count as 0
    for(int i = 0; i < 26; i++)                                 //Running the loop
    {
        if(arr[i] == 1)                                         //Checking if array elements are equal to 1
        {
            count++;                                            //Incrementing count
        }
    }
    if(count == 26)                                             //Checking count is 26 or not
    {
        return 1;                                               //Returning 1
    }
    else
    {
        return 0;                                               //Returning 0 
    }
}
