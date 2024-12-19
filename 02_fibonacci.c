/*
Name: Kesari Vishnu
Description: WAP to generate positive Fibonacci numbers
Date: 12-03-2023
Sample I/P: 8
Sample O/P: 0 1 1 2 3 5 8
*/
#include <stdio.h>
int main()
{
    int number;                          //Declaring variable 'number' as int
    printf("Enter a number: ");         //Asking the user to enter a number
    scanf("%d",&number);                 //Reading the number from user
    if (0 <= number )                     //Checking whether the entered number is greater than or equal to '0' 
    {
        int first = 0;                    //Initialising first=0;
        int second = 1;                   //Initialising second=1;
        for (int next = 0 ; next <= number ; ) //Running the loop 'number' no. of times 
        {
            printf("%d ",next);          //Printing the next number
            first = second;                //Updating first=second
            second = next;                 //Updating second=next
            next = first + second;           //Updating next=first+second
        }
        printf("\n");                        //Printing next line
    }
    else
    {
        printf("Invalid input\n");       //Printing the Invalid input if number is negative
    }
    return 0;
}
