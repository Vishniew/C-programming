/*
Name: Kesari Vishnu
Description: WAP to check N th bit is set or not, If yes, clear the M th bit
Date: 14-03-2023
Sample I/P: Enter the number: 19
            Enter 'N': 1
            Enter 'M': 4
Sample O/P: Updated value of num is 3
*/
#include <stdio.h>
int main()
{
    int number, M, N;                                               //Declaring the variables 'number', M, N
    printf("Enter the number: ");                                   //Asking the user to enter number
    scanf("%d",&number);                                            //Reading number from user
    printf("Enter 'N': ");                                          //Asking the user to enter N value
    scanf("%d",&N);                                                 //Reading N value from user
    printf("Enter 'M': ");                                          //Asking the user to enter M value
    scanf("%d",&M);                                                 //Reading M value from user
    if((number & (1 << N)) != 0)                                    //To check the set bit
    {
        printf("Updated value of num is %d\n",number & ~(1 << M));  //To print updated value
    }
    else
    {
        printf("Updated value of num is %d\n",number);              //To print updated value
    }
    return 0;
}
