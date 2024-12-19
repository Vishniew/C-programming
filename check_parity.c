/*
Name: Kesari Vishnu
Description: WAP to count number of set bits in a given number and print parity
Date: 13-03-2023
Sample I/P: Enter the number: 7
Sample O/P: Number of set bits = 3
            Bit parity is Odd
*/
#include <stdio.h>
int main()
{
    int number;                                 //Declaring variable 'number' as int
    printf("Enter the number : ");              //Asking the user to enter the number
    scanf("%d",&number);                        //Reading number from user
    int count = 0 ;                             //Initialising count = 0
    for(int i = 0 ; i < 32 ; i++ )              //Running the loop 32 times
    {
        if( (number & 1 << i) != 0 )            //Checking the set bits
        {
            count++;                            //Incrementing the count
        }
    }
    printf("Number of set bits = %d\n",count);  //Printing the count as Number of set bits
    if ((count & 1) == 0)                       //Checking whether the countis even or not
    {
        printf("Bit parity is Even\n");         //Printing Bit parity is even if condition is true
    }
    else
    {
        printf("Bit parity is Odd\n");          //Printing Bit parity is odd if condition is false
    }
    return 0;
}