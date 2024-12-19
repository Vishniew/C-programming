/*
Name: Kesari Vishnu
Description: WAP to implement Circular left shift
Date: 01-03-2023
Sample I/P: Enter num: 12
            Enter n : 3
Sample O/P: Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/
#include <stdio.h>

int circular_left(unsigned, int);             //Declaring the function
int print_bits(int);                          //Declaring the function

int main()
{
    int num, n, ret;                            //Declaring the variables num, n, ret

    printf("Enter num: ");                      //Asking the user to enter num
    scanf("%d", &num);                          //Reading num from user

    printf("Enter n : ");                       //Asking the user to enter n
    scanf("%d", &n);                            //Reading n from user

    ret = circular_left(num, n);                //Calling the function and storing in ret

    print_bits(ret);                            //Calling the function

    return 0;
}

int circular_left(unsigned num, int n)          //Function definition
{
    int get_last_nbits = (num & (((1 << n) - 1) << (32 - n))) >> (32 - n); //Getting last n bits

    int left_shift_ntimes = num << n;                                       //Left shifting ntimes

    int circular_left_shift = get_last_nbits | left_shift_ntimes ;          //Circular left shift

    return circular_left_shift;                                             //Returning Circular left shift value

}

int print_bits(int result)                      //Function definition
{
    printf("Result in Binary: ");               //Printing result in binary 
    for(int i = 31 ; i >= 0 ; i-- )             //Running the loop 32 times
    {
        if((result & (1 << i)) != 0)            //Checking set bits
        {
            printf("1 ");                       //Printing 1
        }
        else
        {
            printf("0 ");                       //Printing 0
        }
    }   
    printf("\n");                               //Printing next line
}
