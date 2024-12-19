/*
Name: Kesari Vishnu
Description: WAP to find 3rd largest element in an array
Date: 06-04-2023
Sample I/P: Enter the size of the Array : 5
            Enter the elements into the array: 5 1 4 2 8
Sample O/P: Third largest element of the array is 4
*/

#include <stdio.h>

int sec_largest(int *, int);                //function declaration

int main()
{
    int size, ret;                          //variable declaration

    //Read size from the user
    printf("Enter the size of the array : ");//prints message
    scanf("%d", &size);                     //Reading  size

    int arr[size];                          //Array declaration

    //Read elements into the array
    printf("Enter array elements: ");       //Enter array elements
    for(int i = 0;i < size; i++)
    {
	    scanf("%d",&arr[i]);                //scanning elements
    }

    
    ret = sec_largest(arr, size);           //function call

    printf("Third largest element of the array is %d\n", ret); //printing output

    return 0;

}
int sec_largest(int *arr, int size)         //function definition
{
    int f_large = arr[0];                      //Initialisation
    int s_large = 0;                           //Initialisation
    int t_large = 0;                           //Initialisation
    for(int i=1;i<size;i++)                                 //Running the loop
    {
        if((arr[i] > f_large) && (f_large >= s_large))      //condition
        {   
            t_large=s_large;                                //updating t_large
	        s_large=f_large;                                //updating s_large
	        f_large=arr[i];                                 //updating f_large
	    }
	    else if(s_large <= arr[i])                          //condition
        {
	        t_large=s_large;                                 //updating t_large
	        s_large=arr[i];                                 //updating s_large
        }                                
	    else if(t_large<=arr[i])                            //condition
        {
            t_large=arr[i];	                                //updating t_large
        }
    }
    return t_large;                                         //returning s_large
}
