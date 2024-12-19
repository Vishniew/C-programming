/*
Name: Kesari Vishnu 
Description: WAP to remove duplicate elements in a given array
Date:12-04-23
Sample I/P: Enter the size: 5
            Enter elements into the array: 5 1 3 1 5

Sample O/P: After removing duplicates: 5 1 3
 */

#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);//Function prototype

int main()
{
    int size;                                               //Declaring size of array

    printf("Enter the size: ");                             //Printing message
    scanf("%d",&size);                                    //Reading size of array
    int arr1[size];                                       //Declaring array1

    printf("Enter elements into the array: ");              //Printing message
    for(int i = 0; i < size; i++)                               //Running the loop
    {
        scanf("%d",arr1+i);                                //Reading array elements  
    }

    int size2 = 1;                                           //Initialising size2 as 1
    int arr2[size2];                                         //Declare array2 with size2
    int *size_ptr = &size2;                                    //Initialising a size_ptr pointer variable
    
    
    fun(arr1, size, arr2, size_ptr);                          //Calling function 
    printf("After removing duplicates: ");                    //Printing message
    for(int i = 0; i < *size_ptr; i++)                        //Running the loop
    {
        printf("%d ",arr2[i]);                                //Printing elements after removing duplicates
    }
    printf("\n");
    return 0;
}

void fun(int arr1[], int size, int arr2[], int *new_size)       //Function definition
{
arr2[0] = arr1[0];                                              //Updating first element of array1 into array 2
for(int i = 1; i < size; i++)                                   //Running the outer loop
{
    int count = 0;                                                //Initialising count as 0
    for(int j = 0; j < i; j++)                                  //Running the inner loop
    {
        if(arr1[i] == arr1[j])                                  //Checking whether arr[i] is equal to arr[j]
        {
            count = 1;                                          //Updating count as 1
        
            break;
        }
    } 
    if(!count)                                                  //Checking the condition
    {
        (*new_size)++;                                          //Incrementing the new_size
        arr2[*new_size-1] = arr1[i];                            //Updating the array elements
    }
}
}
