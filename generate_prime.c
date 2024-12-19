/*
Name: Kesari Vishnu
Description:  WAP to check whether a given number is prime or not using function.
Date: 10-04-2023
Sample I/P: 2
Sample O/P: 2 is a prime number
*/
#include <stdio.h>

int is_Prime(int);                               //Function declaration

int main() {
   int num;                                         //Declaring the variable
   scanf("%d", &num);                               //Reading num from user
   int ret = is_Prime(num);
   if (ret == 1)                               //Calling the function and checking the condition
   {
      printf("%d is a prime number\n", num);       //Printing the number is prime
   } 
   else if(ret == 0)
   {
      printf("%d is not a prime number\n", num);   //Printing the number is not prime
   }
   else
   {
       printf("Invalid input\n");
   }
   return 0;
}

int is_Prime(int num)                               //Function definition
{
   if (num <= 1)                                    //Checking the number is greater than or equal to 1
   {
      return -1;
   }
   for (int i = 2; i <= num/2; ++i)                 //Running the loop half the number of times
   {
      if (num % i == 0)                             //Checking the num is divisible by i
      {
         return 0;
      }
   }
   return 1;                                        //Return 1 if it is prime
}
