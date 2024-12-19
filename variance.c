/*
Name: Kesari Vishnu
Description: Variance calculation with dynamic arrays
Date: 09-05-2023
Sample input: Enter the no.of elements : 10
Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
Sample output:  Variance is 40.000000
*/
#include <stdio.h>
#include <stdlib.h>
float variance(int *, int);

int main()
{
    int size;                                   //Declaring int variable size
    int *arr;                                   //Declaring pointer variable arr
    printf("Enter the no.of elements : ");      //Printing message
    scanf("%d",&size);                          //Reading size from user
    arr = malloc(size*sizeof(int));             //Dynamically allocating memory
    printf("Enter the %d elements:\n",size);    //Printing the message
    for(int i = 0; i < size; i++)               //Reading elements from user
    {
        printf("[%d] -> ",i);
        scanf("%d",&arr[i]);
    }
    float var = variance(arr,size);             //Calling variance function
    printf("Variance is %f\n",var);             //Printing variance
}

float variance(int *arr,int size)               //Function definition
{
    int sum1 = 0, mean = 0;                     //Initialising variables sum1, mean as 0 
    for(int i = 0; i < size; i++)               //Calculating sum
    {
        sum1 = sum1 + arr[i];
    }
    mean = sum1 / size;                         //Calculating mean
    int sum2 = 0;                               //Initialising sum2 as 0
    for(int j = 0; j < size; j++)               //Updating the array with squares
    {
        arr[j] = (arr[j] - mean)*(arr[j] - mean);
        sum2 = sum2 + arr[j];
    }
    float var = (float)sum2 / size;             //Calculating variance
    return var;                                 //Return var
}
