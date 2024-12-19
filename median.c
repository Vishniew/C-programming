/*
Name: Kesari Vishnu
Description: A13 - WAP to find the median of two unsorted arrays
Date: 19-03-2023
Sample I/P:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Saample O/P:
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5        
*/
#include<stdio.h>

int main()
{
    int sizeM, sizeN;                                       // get size of arrays A and B
    printf("Enter the 'n' value for Array A: " );           // print message
    scanf("%d",&sizeN);                                     // read size for array A
    printf("Enter the 'n' value for Array B: ");            // print message
    scanf("%d",&sizeM);                                     // read size for array B

    int arrA[sizeN];                                        // create array A of size sizeN 
    int arrB[sizeM];                                        // create array B of size sizeM
    printf("Enter the elements one by one for Array A:");   // print message
    for(int i=0;i<sizeN;i++)                                // get elements for array A
    {                             
        scanf("%d",&arrA[i]);                               // read element one by one
    }
    printf("Enter the elements one by one for Array B:");   // print message
    for(int i=0;i<sizeM;i++)                                // get elements for array A
    {
        scanf("%d",&arrB[i]);                               // read element one by one
    }

    // bubble sort array A
    for(int i=0;i<sizeN-1;i++)
    {
        for(int j=0;j<sizeN-1;j++)
        {
            if(arrA[j]>arrA[j+1])
            {
                int temp=arrA[j+1];
                arrA[j+1]=arrA[j];
                arrA[j]=temp;
            }
        }
    }
    // bubble sort array B
    for(int i=0;i<sizeM-1;i++)
    {
        for(int j=0;j<sizeM-1;j++)
        {
            if(arrB[j]>arrB[j+1])
            {
                int temp=arrB[j+1];
                arrB[j+1]=arrB[j];
                arrB[j]=temp;
            }
        }
    }

    /************Median*****************/

    int arrAMedPos1=0;                              // declaration arrayA index postion 1
    int arrAMedPos2=0;                              // declaration arrayA index position 2 (applicable only in case array has even length or size)
    float arrAmed=0.0;                              // declaration median of array

    if(sizeN%2==0)                                  // if array A size is even then proceed if not go to else
    {
        arrAMedPos1=sizeN/2-1;                      // array element position 1 
        arrAMedPos2=sizeN/2;                        // array element postion 2
        int med1=arrA[arrAMedPos1];                 // get position 1 value from array
        int med2=arrA[arrAMedPos2];                 // get position 2 value from array
        int sum=med1+med2;                          // sum both
        arrAmed=(float)sum/2;                       // typecast sum to float and store result in arrAmed (ie array A median)
    }
    else                                            // if the array length is odd then execute this
    {
        arrAMedPos1=(sizeN/2);                      // odd size by 2 gives index postion of median of array A
        arrAmed=(float)arrA[arrAMedPos1];           // get that index value and type cast it to float
    }

    int arrBMedPos1=0;                              // declaration arrayB index postion 1
    int arrBMedPos2=0;                              // declaration arrayB index position 2 (applicable only in case array has even length or size)
    float arrBmed=0.0;                              // declaration median of array B

    if(sizeM%2==0)                                  // if array A size is even then proceed if not go to else
    {
        arrBMedPos1=sizeM/2-1;                      // array element position 1 
        arrBMedPos2=sizeM/2;                        // array element postion 2
        int med1=arrB[arrBMedPos1];                 // get position 1 value from array
        int med2=arrB[arrBMedPos2];                 // get position 2 value from array
        int sum=med1+med2;                          // sum both
        arrBmed=(float)sum/2;                       // typecast sum to float and store result in arrAmed (ie array A median)

    }
    else                                            // if the array length is odd then execute this
    {
        arrBMedPos1=(sizeM/2);                      // odd size by 2 gives index postion of median of array A
        arrBmed=(float)arrB[arrBMedPos1];           // get that index value and type cast it to float
    }
    float medSum= arrAmed+arrBmed;                  // sum array A median and array B median
    float FinalMed=(float)medSum/2;                 // get median of medSum which will be final median
    printf("Median of array1 : %g\n",arrAmed);      // print Array 1 median
    printf("Median of array2 : %g\n",arrBmed);      // print Array 1 median
    printf("Median of both arrays : %g\n",FinalMed);// print final median
    return 0;
}
