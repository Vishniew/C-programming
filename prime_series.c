/*
Name: Kesari Vishnu
Description: WAP to generate the prime series upto the given limit using functions 
Date: 10-04-2023
Sample I/P: 4
Sample O/P: 2 3 
*/
#include <stdio.h>

void generate_Prime(int);           //Function declaration
int is_Prime(int);                  //Function declaration
int main() 
{
   int limit;                       //Declaration of variable
   printf("Enter a number: ");     //Prompting the limit
   scanf("%d", &limit);             //Reading from user
   generate_Prime(limit);           //Calling the function
   return 0;
}


int is_Prime(int num)               //Function definition 
{
   if (num <= 1)                    //Checking if num is greater than or equal to 1
   {
      return -1;
   }
   for (int i = 2; i <= num/2; ++i) //Running the loop half the number of times
   {
      if (num % i == 0)             //Checking whether it is divisible by i or not
      {
         return 0;
      }
   }
   return 1;
}

void generate_Prime(int limit)      //Function definition
{
   int ret;                                    //Declaring the variable
   
   if(limit <=1)                                //Checking if limit is greater than 1 
   {
        printf("Invalid input");                //Printing invalid input
   }
   for (int i = 2; i <= limit; ++i)                 //Running the loop
   {
      ret = is_Prime(i);                        //Calling the function
      if (ret == 1)                                 //Checking if ret is 1
      {
         printf("%d ", i);                          //Printing the prime numbers
      }

   }
   printf("\n");                                    //Printing next line
}
