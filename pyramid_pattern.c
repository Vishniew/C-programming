/*
Name: Kesari Vishnu
Description: WAP to print pyramid pattern as shown below
Date: 12-03-2023
Sample I/P: 5
Sample O/P:
            5
            4 5
            3 4 5
            2 3 4 5
            1 2 3 4 5
            2 3 4 5
            3 4 5
            4 5
            5
*/
#include <stdio.h>
int main()
{
    int number;                                                 //Declaring variable 'number' as int
    printf("Enter the number: ");                               //Asking the user to enter the number
    scanf("%d",&number);                                        //Reading the input number from user
    for(int row = 1; row <= number ; row++)                        //Running outer loop 'number' no. of times
    {
        for (int column = (number - row) + 1 ; column <= number ; column++)   //Running inner loop 'number' no. of times
        {
            printf("%d ",column);                                //Printing the number if condition is true
        }
        printf("\n");                                           //To print next line
    }
    for(int row = 1; row <= (number-1) ; row++)                     //Running outer loop 'number-1' no. of times
    {
        for (int column = (row + 1); column <= number; column++)      //Running inner loop 'number' no. of times
        {
            printf("%d ",column);                                //Printing the number if condition is true
        }
        printf("\n");                                           //To print next line
    }
    return 0;
}
