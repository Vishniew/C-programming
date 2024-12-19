/*
Name: Kesari Vishnu
Description: WAP to get 'n' bits of a given number 
Date: 25-03-2023
Sample I/P: Enter the number: 10

            Enter number of bits: 3
Sample O/P: Result = 2
*/

#include <stdio.h>
int get_nbits(int num, int n);              //Declaring the function definition

int main()
{
    int num, n, res = 0;                    //Decalring variables num, n, res
    
    printf("Enter the number: ");           //asking the user to enter number
    scanf("%d",&num);                    //Reading number from user
    
    printf("Enter number of bits: ");       //Asking the user to enter no. of bits
    scanf("%d",&n);                         //Reading number of bits from user
    
    res = get_nbits(num, n);                //Storing returned value of function
    
    printf("Result = %d\n", res);           //Printing result
    return 0;
}

int get_nbits(int num, int n)               //Function definition
{
    int result = 0;                         //initialising varible result = 0
    result = num & ((1 << n)-1) ;           //getting nbits and storing in result variable
    return result;                          //Returning result
}
