/*
Name: Kesari Vishnu
Description: WAP to toggle 'n' bits from given position of a number
Date: 01-04-2023
Sample I/P: Enter the number: 10

            Enter number of bits: 3

            Enter the pos: 5
Sample O/P: Result = 50
*/
#include <stdio.h>
int toggle_nbits_from_pos(int, int, int);       //Declaring the function

int main()
{
    int num, n, pos, res = 0;                   //Declaring the variables num, n, pos, res
    
    printf("Enter the number: ");               //Asking the user to enter number
    scanf("%d", &num);                          //Reading num from user
    printf("Enter number of bits: " );          //Asking the user to enter number of bits
    scanf("%d", &n);                            //Reading number of bits from user
    printf("Enter the pos: ");                  //Asking the user to enter position
    scanf("%d", &pos);                          //Reading pos from user
    
    res = toggle_nbits_from_pos(num, n, pos);   //Calling the function and storing returned value
    
    printf("Result = %d\n", res);               //Printing result

    return 0;
}    

int toggle_nbits_from_pos(int num, int n, int pos)      //Function definition
{
    int result;                                         //Declaring variable result

    result = num ^ (((1 << n) - 1) << (pos - n + 1));   //toggling n bits from position

    return result;                                      //Returning result

}
