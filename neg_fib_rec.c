/*
Name: Kesari Vishnu
Description: WAP to generate negative fibbonacci numbers using recursion
Date: 06-04-2023
Sample I/P: Enter a number: -8
Sample O/P: 0 1 -1 2 -3 5 -8
*/

#include <stdio.h>

void negative_fibonacci(int, int, int, int);                    //Function declaration

int main()
{
    int limit;                                                  //Declaring varibale
    int first = 0, second = 1, next = 0;                        //Initialising  variables
    printf("Enter a number: ");                                 //Printing enter a number
    scanf("%d", &limit);                                        //Reading limit from user
    if(limit <= 0)                                              //Checking limit is +ve or not
    {
        
        negative_fibonacci(limit, first, second, next);                     //Calling function
        printf("\n");                                           //Printing next line
    }
    else
    {
        printf("Invalid input\n");                              //Printing invalid input
    }

    return 0;
}

void negative_fibonacci(int limit, int first, int second, int next) //Function definition
{
    if(next == 0)                                               //Checking if next is  0
    {
        printf("%d %d ",first,second);                          //Printing first and second elements 
        next = first - second ;                                 //Upadting next value
    }
    if(next <= (-limit) && next >= limit)                      //Conditional check
    {
        printf("%d ",next);                                     //Printing next element
        

        first = second ;                                        //Updating first to second

        second = next ;                                         //Updating second to next
        
        next = first - second ;                                 //Updating next value
        negative_fibonacci(limit, first, second, next);         //Calling the function
    }
}
