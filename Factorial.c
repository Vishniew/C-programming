/*
Name: Kesari Vishnu
Description: WAP to find factorial of given number using recursion
Date: 05-04-2023
Sample I/P: Enter the value of N : 5
Sample O/P: Factorial of the given number is 120
*/

#include <stdio.h>

int main()
{
    static int num, count = 0;              //Declaring static variables
    static unsigned int fact = 1;           //Initialising static varible fact = 1

    if(count == 0)                          //Checking if count is 0
    {
        printf("Enter the value of N : ");  //Asking the user to enter value of N
        scanf("%d",&num);                   //Reading num from user
        count = 1;                          //Updating count to 1
    }
    if(num > 1)                             //Checking if num greater than 1
    {
        fact = fact * num--;                //Updating fact value
        
        main();                             //Calling main function
    }
    if(num == 0 | num == 1 )                //Checking if number is 0 or 1
    {
        printf("Factorial of the given number is %d\n",fact);   //Printing factorial of given number
        num = 2;                            //Updating num to 2
    }
    else if(num < 0)                        //Checking if num is -ve
    {
        printf("Invalid Input\n");          //Printing invalid input 
    }
    return 0;
}
