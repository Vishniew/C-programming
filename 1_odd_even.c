/*
Name: Kesari Vishnu
Description:The user entered number should identified whether its a odd or a even number. Mention its sign too.
Date: 03-03-2023
Sample I/P: 2
Sample O/P: 2 is a positive even number
*/
#include <stdio.h>
int main()
{
    int number;                                             // Declaring the variable 'number' as int
    printf("Enter the value of 'n' : ");                    // Prompting the user to enter a value
    scanf("%d",&number);                                    // Reading the number from the user
    if (number > 0)                                         // checking whether the number is greater than 0.
    {
        if (number % 2 == 0)                                // checking whether the number is even or not.
        {
            printf("%d is positive even number\n",number);  // Printing the number is positive even number if the condition is true
        }
        else 
        {
            printf("%d is positive odd number\n",number);   // Printing the number is positive odd number if the condition is false
        }
        
    }
    else if (number < 0)                                    // checking whether the number is lesser than 0
    {
        if (number % 2 == 0)                                // checking whether the number is even or not.
        {
            printf("%d is negative even number\n",number);  // Printing the number is negative even number if the condition is true
        }
        else 
        {
            printf("%d is negative odd number\n",number);   // Printing the number is negative odd number if the condition is false
        }
        
    }
    else
    {
        printf("%d is neither odd nor even\n",number);      // Printing the number is neither odd nor even if all the above conditions are false
    }
    return 0;
    
}
