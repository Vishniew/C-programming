/*
Name: Kesari Vishnu
Description: WAP to implement getword function
Date: 12-04-2023
Sample input: Enter the string : Welcome to Emertxe
Sample output: You entered Welcome and the length is 7
*/

#include <stdio.h>

int getword(char str[]);                        //Function prototype

int main()
{
        int len = 0;                            //Initialising len as 0
	    char str[100];                          //Declaring string  array

		printf("Enter the string : ");          //Printing the message
		scanf(" %[^\n]", str);                  //Reading the string using selective scanf

		len = getword(str);                     //Calling the function

        printf("You entered %s and the length is %d\n", str, len);  //Printing the word and length
}

int getword(char str[])                         //Function definition
{
    int i = 0, count = 0;                       //Intialising variables i and count
    while(str[i] != '\0' && str[i] != ' ')      //Checking whether character is not equal to null and space characters
    {
        count++;                                //Incrementing the count
        i++;                                    //Incrementing i
    }
        *(str+i) = '\0';                        //Updating space to null character
    
    return count;                               //Returning count
}
