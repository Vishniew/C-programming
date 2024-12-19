/*
Name: Kesari Vishnu
Description: WAP to generate a n*n magic square
Date: 25-05-2023
Sample input: Enter a number: 3
Sample output:
 8  1  6
 3  5  7
 4  9  2
*/
#include <stdio.h>
#include <stdlib.h>
void magic_square(int **ptr, int n)       //function definition with arguments
{
    int val=1;                            //initializing variable
    int i=0,j=n/2;                        //initializing variables
    while ( val <= (n*n) )                //check condition for variable value
    {
        if  ( i == -1 && j == n )         //check condition for row and column value
        {
            if ( ptr[n-1][0] != 0 )       //check whether the array value is 0 or not
            {
                i+=2;                     //increment i variable by 2
                j-=1;                     //decrement j variable by 1
                ptr[i][j] = val;          //assigning value to array with index i and j
            }
            else
            {
                i=n-1;                    //assign value to variable i
                j=0;                      //assign value to variable j
                ptr[i][j] = val;          //assigning value to array with index i and j
            }
        }
        else
        {
            if ( i < 0 )                  //check condition
                i = n-1;                  //assign value to variable i
            if ( j == n )                 //check condition
                j = 0;                    //assign value to variable j
            if ( ptr[i][j] != 0 )         //check whether the array value with index i and j  is 0
            {
                i=i+2;                    //assign value to variable i
                j=j-1;                    //assign value to variable j
                ptr[i][j] = val;          //assigning value to array with index i and j

            }
            else
                ptr[i][j] = val;          //assigning value to array with index i and j
        }
        val++;                            //post incrementing variable value
        i-=1;                             //decrement i variable value by 1
        j+=1;                             //increment j variable value by 1

    }
    for ( int j=0; j < n ; j++ )          //outer loop
    {
        for ( int k=0; k<n ;k++ )         //inner loop to access each element
        {
            printf ("%2d ",ptr[j][k] );   //prints the value
        }
        printf("\n");                     //prints newline
    }
}

int main()
{
    int n;                                                     //declaring variable
    int **ptr;                                                 //declaring pointer
  //printf("Enter a number: ");                                //print statement for user to enter number
    scanf("%d",&n);                                            //read the user value
    if ( n % 2 == 0 || n < 3 )                                 //check condition
        printf("Error : Please enter only positive odd numbers");   //prints error message
    else
    {
        ptr = calloc (n,sizeof(int*));                         //allocation of dynamic memory and assign base address to ptr variable
        for ( int i=0;i<n;i++)                                 //loop to acess each element in an array pointer
        {
            ptr[i] = calloc(n,sizeof(int));                    //allocation of dynamic memory and assign base address to ith index of array pointer
        } 
        magic_square( ptr, n);                                 //function call by passing address and value
    }
    return 0;
}