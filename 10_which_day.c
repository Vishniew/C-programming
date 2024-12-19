/*
Name: Kesari Vishnu
Description: WAP to find which day of the year
Date: 12-03-2023  
Sample I/P: Enter the value of 'n' : 9
            Choose First Day :
            1. Sunday
            2. Monday
            3. Tuesday
            4. Wednesday
            5. Thursday
            6. Friday
            7. Saturday
            Enter the option to set the first day : 2
Sample O/P: The day is Tuesday
*/
#include <stdio.h>
int main()
{
    int n, First_day, Day;                          //Declaring variables 'n', First_day, Day as int
    printf("Enter the value of 'n' : ");            //Asking the user to enter value of 'n'
    scanf("%d",&n);                             //Reading 'n' value from user
    if(0 < n && n <= 365)                           //Checking whether 'n' is in between 0 and 365
    {
        printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");                            //Printing the days of week Menu
        scanf("%d",&First_day);                     //Reading first day from user
        if(0 < First_day && First_day <= 7)
        {
            Day = (n + First_day) % 7 -1;              //Calculating modulus of day
            switch(Day)                                 //Using switch case
            {
                case -1:    
                    printf("The day is Friday\n");      //if case is -1, Printing the day is Friday 
                    break;
                case 1:
                    printf("The day is Sunday\n");      //if case is 1, Printing the day is Sunday
                    break;
                case 2:
                    printf("The day is Monday\n");      //if case is 2, Printing the day is Monday
                    break;
                case 3:
                    printf("The day is Tuesday\n");     //if case is 3, Printing the day is wednesday
                    break;
                case 4:
                    printf("The day is Wednesday\n");   //if case is 4, Printing the day is Thursday
                    break;
                case 5:
                    printf("The day is Thursday\n");    //if case is 5, Printing the day is Friday
                    break;
                default:
                    printf("The day is Saturday\n");   //By default, Printing the day is Saturday 
            }
        }
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7\n"); //Error message if first day is not in between 0 and 7
    
        }
    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n"); //Error message if 'n' is not in the limit
    }
    return 0;

}
