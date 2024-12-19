/*
Name: Kesari Vishnu
Description: Print the values in sorted order without modifying or copying array 
Date: 10-04-2023
Sample input: Enter the size : 5
              Enter 5 elements 
              10 1 3 8 -1
Sample output: After sorting: -1 1 3 8 10
               Original array values 10 1 3 8 -1
*/

#include <stdio.h>

void print_sort(int [], int);                   //Declaring the function

int main()
{
    int size, iter;                             //Declaring the variables

    printf("Enter the size : ");   //Prompting the user to enter size
    scanf("%d", &size);                         //Reading size

    int arr[size];                              //Declaring array

    printf("Enter %d elements\n",size);     //Priting the elements
    for (iter = 0; iter < size; iter++)         //Running the loop
    {
        scanf("%d", &arr[iter]);                //Reading the array elements
    }

    print_sort(arr, size);                      //Calling the function
}
 
void print_sort(int arr[], int size)            //Function definition
{
  
    int large = arr[0], small = arr[0];         //Initialising large and small elements
    for(int i = 1; i < size ; i++)              //Running the loop
    {
        if(large < arr[i])                      //Checking if large is less than array elements
        {
            large = arr[i];                     //Updating large 
        }
        if(small > arr[i])                      //Checking if small is greater than array elements
        {
            small = arr[i];                     //Updating small
        }
    }
    printf("After sorting: ");
    int sec_small = large;                      //Initialising sec_large as large
    for(int i = 0; i < size; i++)               //Running the outer loop
    {
        for(int j = 0; j < size; j++)           //Running the inner loop
        {

            if(arr[j] == small)                 //checking if array elements are equal to small
            {
                printf("%d ",arr[j]);           //Printing the element 
            }
            if((arr[j] > small) & (arr[j] < sec_small)) //Checking if element is greater than small and less than sec_small
            {
                sec_small = arr[j];             //Updating the sec_small 
            }
        }
        small = sec_small;                      //Updating small as sec_small
        sec_small = large;                      //Updating sec_small as large
    }
    printf("\nOriginal array values ");           //Printing the Original array values
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);                   //Printing the elements
    }
    printf("\n");                                //Printing next line
}
