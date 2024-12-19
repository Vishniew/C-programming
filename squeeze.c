/*
Name: Kesari Vishnu
Description: Squeeze the character in s1 that matches any character in the string s2
Date: 24-04-2023
Sample input:   Enter s1 : Dennis Ritchie
                Enter s2 : Linux
Sample output:  After squeeze s1 : Des Rtche
*/
#include <stdio.h>

void squeeze(char [], char []);                         //Function prototype

int main()
{
    char str1[30], str2[30];                            //Declaring character arrays str1, str2
    
    printf("Enter string1:");                           //Printing the message
    scanf("%[^\n]", str1);                              //Selective scanf
    
    getchar();                                          //getchar to read the next line character
    printf("Enter string2:");                           //Printing the message
    scanf("%[^\n]", str2);                              //Selective scanf
    
    squeeze(str1, str2);                                //Fucntion call
    
    printf("After squeeze s1 : %s\n", str1);            //Printing the sueezed string
    
    return 0;
}
void squeeze(char str1[], char str2[])                  //Function definition
{
    for(int i = 0; str1[i] != '\0'; i++)                //Loop for str1
    {
        for(int j = 0; str2[j] != '\0'; j++)            //Loop for str2
        {
            if(str1[i] == str2[j])                      //Checking if character of str1 is present in str2 
            {
                for(int k = i; str1[k] != '\0'; k++)    //shifting characters backward
                {

                    str1[k] = str1[k+1];
                }
                i--;                                    //Decrementing i
            }
        }
    }
  
}
