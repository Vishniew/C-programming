/*
Name: Kesari Vishnu
Description: WAP to print 'n' bits from LSB of a number
Date: 30-03-2023
Sample I/P: Enter the number: 10

            Enter number of bits: 12
Sample O/P: Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/
#include <stdio.h>
int print_bits(int number, int no_of_bits);         //Declaring the function

int main()                                          
{
    int number, no_of_bits;                         //Declaring variables number, no_of_bits
    printf("Enter the number: ");                   //Asking the user to enter number
    scanf("%d",&number);                            //Reading number from user
    printf("Enter number of bits: ");               //Asking the user to enter no of bits
    scanf("%d",&no_of_bits);                        //Reading no. of  bits from user

    print_bits(number, no_of_bits);             //Calling the function

    return 0;

}

int print_bits(int number, int no_of_bits)          //Function definition
{
    printf("Binary form of %d: ",number);           //Printing binary form

    for(int i = (no_of_bits - 1) ; i >= 0 ; i-- )   //Running the loop no. of bits - 1 times
    {
        if((number & 1 << i ) != 0)                 //Checking the set bit
        {
            printf("1 ");                           //Printing 1 ,if condition is true 
        }
        else
        {
            printf("0 ");                           //Printing 0, if condition is false
        }
    }
    printf("\n");                                   //Printing next line
}