#include <stdio.h>

int main()
{
    //Write logic to check the given number is prime or not

    int number, count = 0 ;                                 //Declaring variables number, count
    //printf("Enter a number: ");                             //Asking the user to enter a number
    scanf("%d",&number);                                    //Reading number from user
    if( 1 < number )                                        //Checking whether "number" is greater than 1
    {
        for(int i = 2 ; i <= number/2 ; i++)                //To run the loop half the number of times
        {
            if(number % i == 0)                             //Checking if number is divisible by 0
                count++;                                    //Incrementing count
        }
        if(count == 0)                                      //Checking count=0
        {
            printf("%d is a prime number\n",number);        //Printing number is a prime number
        }
        else
        {
            printf("%d is not a prime number\n",number);    //Printing number is not a prime number
        }
    }
    else
    {
        printf("Invalid input\n");                          //Printing Invalid input
    }
    return 0;

}