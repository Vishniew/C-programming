/*
Name: Kesari Vishnu
Description: WAP to print all primes using Sieve of Eratosthenes method
Date: 17-03-2023
Sample I/P: Enter the value of 'n' : 20
Sample O/P: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/
#include <stdio.h>
int main()
{
    int n;                                                          //Declaring variable n
    printf("Enter the value of 'n' : ");                            //Asking the user to enter the n value
    scanf("%d",&n);                                                 //Reading n value from user
    if(n>1)                                                         //To check the values greater than 1
    {
        int array[n-2];                                             //Declaring the array of size n-2
        for(int i = 0 ; i < n - 1 ; i++)                                     //To run the loop n-1 times
        {
            array[i] = i + 2;                                           //To store values from 2 in array
        }
        for(int i = 2 ; i * i <= n; i++)                                    //To run the loop square root of n times
        {
            for(int j = 2 ; j < n-1 ; j++)                                //To run the loop n-1 times
            {
                int temp = i * j ;                                       //Initialising variable 'temp' with i*j
                for(int k = 0 ; k <= n ; k++)                           //To run the loop n times
                {
    
                    if(temp == array[k])                            //To check temp is equal to array element
                    {
                        array[k] = 0;                                 //Updating array element to 0
                    }
                }
            }
        }
        printf("The primes less than or equal to %d are : ",n);     //To print the line "primes less than or equal to n"
        for(int m = 0 ; m < n - 1 ; m++)                                    //To run the loop 'n-1' times
        {
            if(array[m] != 0)                                       //To check element is not 0
            {
                printf("%d ",array[m]);                             //To print array elements if not 0
            }
        }
    }
    else
    {
        printf("Please enter a positive number which is > 1");      //Error message to enter a positive number
    }
    printf("\n");                                                   //To print next line
    return 0;
}