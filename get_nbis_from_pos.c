/*
Name: Kesari Vishnu
Description: WAP to get 'n' bits from given position of a number
Date: 30-03-2023
Sample I/P: Enter the number: 12

            Enter number of bits: 3

            Enter the pos: 4
Sample O/P: Result = 3
*/
#include <stdio.h>

int get_nbits_from_pos(int num, int n, int pos);            //Declaring the function

int main()
{
    int num, n, pos, res = 0;                               //Declaring variables num,n,pos,res
    
    printf("Enter the number: ");                           //Asking the user to enter the number
    scanf("%d", &num);                                      //Reading number from user
    printf("Enter number of bits: ");                       //Asking the user to enter the number of bits
    scanf("%d", &n);                                        //Reading no of bits from user
    printf("Enter the pos: ");                              //Asking the user to enter the pos
    scanf("%d", &pos);                                      //Reading pos from user
    
    res = get_nbits_from_pos(num, n, pos);                  //Calling the function and collecting returned value
    
    printf("Result = %d\n", res);                           //Printing result
}

int get_nbits_from_pos(int num, int n, int pos)             //Function definition
{
    int result;                                             //Declaring variable result
    if(n < pos)                                             //Checking n is less than pos
    {
        result = (num & (((1 << n) - 1 ) << (pos - n + 1))) >> (pos - n + 1) ; //Getting nbits from position
    }
    else if(n == pos)                                       //Checking n is equal to pos
    {
        result = (num & (((1 << n) - 1 ) << (pos - n + 1))) >> 1 ;             //Getting nbits from position
    }
    
    return result;                                          //Returning the result
}