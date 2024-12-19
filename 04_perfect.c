/*
Name: K.Vishnu
Description: WAP to check if number is perfect or not
Date: 09-03-2023
Sample I/P: 6
Sample O/P: Yes, entered number is perfect number
*/
#include <stdio.h>
int main()
{
    int number;                                                 //Declaring variable 'number' as int 
    printf("Enter a number: ");                                 //Asking the user to enter a number
    scanf("%d",&number);                                        //Reading the number from user
    if (number > 0)                                             //Checking whether the number is greater then 0
    {
        int sum = 0;                                            //Initilising sum with 0
        for(int i = 1; i < number; i++)                         //Running the loop 'number' no. of times 
        {
            if ((number % i) == 0)                              //Checking whether 'i' is divisor of given number or not
            {
                sum = sum + i;                                  //Updating the sum
            }
        }
        if (sum == number)                                      //Checking whether sum is equal to number
        {
            printf("Yes, entered number is perfect number\n");  //Printing entered number is perfect number
        }
        else
        {
            printf("No, entered number is not a perfect number\n"); //Printing entered number is not a perfect number
        }
    }
    else
    {
        printf("Error : Invalid Input, Enter only positive number\n"); // Printing error message if number is not positive
    }
    return 0;
}
