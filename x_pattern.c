/*
Name: Kesari Vishnu
Description: WAP to print the numbers in X format as shown below
Date: 12-03-2023
Sample I/P: 5
Sample O/P: 
            1   5
             2 4
              3
             2 4
            1   5
*/
#include <stdio.h>
int main()
{
    int number;                                     //Declaring a variable 'number' as int
    printf("Enter the number: ");                   //Asking the user to enter the number
    scanf("%d",&number);                            //Reading input number from user
    for (int row=1;row<=number;row++)               //Running the outer loop 'number' no. of times
    {
        for (int column=1;column<=number;column++)  //Running the inner loop 'number' no. of times
        {
            if (row==column)                        //Checking whether row is equal to column
            {
                printf("%d",column);                //Printing the number if condition is true
            }
            else if (row+column==number+1)          //Checking whether row+column is equal to number+1
            {
                printf("%d",number-row+1);          //Printing the number if condition is true
            }
            else
                printf(" ");                        //Printing the space if all above conditions are false
        }
        printf("\n");                               //Printing next line
    }
    return 0;
}
