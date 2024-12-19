/*
Name: Kesari Vishnu
Description: WAP to find 2nd largest element in an array
Date: 05-04-2023
Sample I/P: Enter the size of the Array : 5
            Enter the elements into the array: 5 1 4 2 8
Sample O/P: Second largest element of the array is 5
*/
#include <stdio.h>

int sec_largest(int [], int);                   //Declaring the function

int main()
{
    int size, ret;                              //Declaring the variables
    
    printf("Enter the size of the array :");    //Asking the user to enter size of array
    scanf("%d", &size);                         //Reading size
    
    int arr[size];                              //Declaring the array
    
    printf("Enter the elements into the array: ");  //Asking the user to enter elements of array
    for(int i = 0 ; i < size ; i++ )                //Running the loop size times
    {
        scanf("%d",&arr[i]);                        //Reading array elements
    }

    ret = sec_largest(arr, size);                   //Calling the function and storing returned value
    
    printf("Second largest element of the array is %d\n", ret); //Printing the second largest element
}   


int sec_largest(int arr[], int size)                //Function definition
{

    int largest, s_largest;                     //Declaring variables
    if(arr[0] > arr[1])                             //Comparing 0th and 1st element
    {
        largest = arr[0];                           //Assigning 0th element to largest
        s_largest = arr[1];                     //Assigning 1st element to smallest
    }
    else 
    {
        largest = arr[1];                           //Assigning 1st element to largest
        s_largest = arr[0];                     //Assigning 0th element to smallest
    }

    for(int i=2; i<size; i++)                       //Runnnig the loop
    {
        if(arr[i] > largest)                        //Checking if arr[i] is greater than largest
        {
            s_largest = largest;                //Updating s_largest with largest
            largest = arr[i];                   //Updating largest with arr[i]
        }
        else if(arr[i] > s_largest && arr[i] != largest) //Checking if arr[i] greater than s_largest and not equal to largest
        {
            s_largest = arr[i];                 //Updating s_largest with arr[i]
        } 
    }
    return s_largest;                           //Returning s_largest element
}
