/*
Name: Kesari Vishnu
Description: WAP to print triangle pattern as shown below
Date: 12-03-2023
Sample I/P: 5
Sample O/P:
            1 2 3 4 5
            6     7
            8   9
            10 11
            12
*/
#include <stdio.h>
int main()
{
    int number;                                                    //Declaring variable number as int
    int Digit=1;                                                   //Initialising variable Digit with 1
    printf("Enter the number: ");                                  //Asking the user to enter the number
    scanf("%d",&number);                                           //Reading the number from user
    for (int row=1; row <= number; row++)                          //Running the row loop 'number' no. of times
    {
        for (int column=1; column <= number; column++)             //Running the column loop 'number' no. of times
        {
            if (row == 1 || column == 1 || row+column == number+1) //Checking whether row==1, column==1 and row+column == number+1
            {
                printf("%d ",Digit++);                             //Printing the Digit
            }
            else
                printf("  ");                                      //Priting the spaces if the above condition is false
        }
        printf("\n");                                              //Printing the next line
    }
    return 0;
}
