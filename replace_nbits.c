/*
Name: Kesari Vishnu
Description: WAP to replace 'n' bits of a given number 
Date:25-03-2023
Sample I/P: Enter the number: 15

            Enter number of bits: 2

            Enter the value: 1
Sample O/P:Result = 13
*/

#include <stdio.h>
int replace_nbits(int number, int n, int value);    //Declaring the function

int main()
{
    int number, n, value, res;                      //Declaring the variables number, n, value, res
    printf("Enter the number: ");                   //Asking the user to enter number
    scanf("%d",&number);                            //Reading number from user
    printf("Enter number of bits: ");               //Asking the user to enter no. of bits
    scanf("%d",&n);                                 //Reading no. of bits from user
    printf("Enter the value: ");                    //Asking the user to enter the value
    scanf("%d",&value);                             //Reading value from user
    
    res = replace_nbits(number, n, value);          //Storing returned value
    
    printf("Result = %d\n", res);                   //Printing result 
    return 0;
}
int replace_nbits(int number, int n, int value)     //Function definition
{
    int clear_nbits, get_nbits, result = 0;         //Declaring variables clear_nbits, get_nbits, result
    clear_nbits = number & ~((1 << n) - 1) ;        //Clearing n bits

    get_nbits = value & ((1 << n) - 1) ;            //Getting n bits

    result = clear_nbits | get_nbits ;              //Replacing n bits and storing in result variable
    return result;                                  //Returning result
}
