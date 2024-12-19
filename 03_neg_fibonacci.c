/*
Name: Kesari Vishnu
Description: WAP to generate negative Fibonacci numbers
Date: 12-03-2023
Sample I/P: -8
Sample O/P: 0 1 -1 2 -3 5 -8
*/
#include <stdio.h>
int main()
{
    int limit;                                      //declaring 'limit' variable as int
    printf("Enter a number: ");                     //Asking the user to enter a number
    scanf("%d",&limit);                             //Reading the input 'limit' from user
    if ( limit <= 0)                                //Checking the limit is less than 0 
    {
        int first = 0;                              //Initialising variable first = 0
        int second = 1;                             //Initialising variable second = 1
        int next = 0;                               //Initialising variable next = 0
        while (next <= -(limit) && next >= limit)   //Running the while loop when next is less than negative and greater than positive limit
        {
            printf("%d ",next);                     //Printing the next number
            first = second;                         //Updating first = second
            second = next;                          //Updating second = next
            next = first - second;                  //Updating next = first - second                                 
        }
    }
    else
    {
        printf("Invalid input");                    //Printing the error Invalid input
    }
    printf("\n");                                   //Printing next line
    return 0;
}
