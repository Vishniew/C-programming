/*
Name: Kesari Vishnu
Description: WAP to replace each string of one or more blanks by a single blank
Date: 20-04-2023
Sample input:   Enter the string with more spaces in between two words
                Pointers     are               sharp     knives.
Sample output:  Pointers are sharp knives.

*/
#include <stdio.h>

void replace_blank(char []);            //Function prototype

int main()
{
    char str[150];                       //Character array
    
    
    scanf("%[^\n]", str);                                               //Selective scanf
    
    replace_blank(str);                     //Calling function
    
    printf("%s\n", str);                    //Printing string
}

void replace_blank(char *str)               //Function definition
{
    for(int i = 0; str[i] != '\0'; i++)     //Running the loop
    {
        
        if(str[i] == '\t' || str[i] == ' ') //Checking if character is '\t' or ' '
        {
            str[i] = ' ';                   //Updating to ' '
            while(str[i+1] == '\t' || str[i+1] == ' ')  //Running while loop
            {
                if(str[i+1] == '\t' || str[i+1] == ' ') //Checking if character is '\t' or ' '
                {
                    for(int j = i; str[j] != '\0'; j++) //Running the loop
                    {
                        str[j] = str[j+1];              //Updating current character with next character
                    }

                }
            }
        }
    }
}
