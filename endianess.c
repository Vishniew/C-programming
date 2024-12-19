/*
Name: Kesari Vishnu
Description: WAP to convert Little Endian data to Big Endian
Date: 16-05-2023
Sample input:Enter the size: 4
Enter any number in Hexadecimal: 12345678
Sample output:After conversion 78563412
*/
#include<stdio.h>
int main()
{
    int num,size,temp;                             //Initializing the variables
    printf("Enter the size: ");                    //print statement for user to enter size
    scanf("%d",&size);                             //read user entered size value
    printf("Enter any number in Hexadecimal: ");   //print statement for user to enter hexadecimal number
    scanf("%x",&num);                              //read the user entered number
    char *ptr = (char *) &num;                     //Initializing character pointer with num variable address
    for ( int i = 0; i < size / 2; i++)              //loop to access each byte value
    {
        temp = ptr[i];                             //Assigning value to temp variable
        ptr[i] = ptr[size-i-1];                    //Assigning value to ith address
        ptr[size-i-1] = temp;                      //Assigning temp variable value to pointer address

    }
    printf("After conversion %X",num);             //prints hexadecimal number
    return 0;
}
