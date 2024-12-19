/*
Name: Kesari Vishnu
Description: WAP to implement Circular right shift
Date: 03-04-2023
Sample I/P: Enter num: 12
            Enter n : 3
Sample O/P: Result : 10000000 00000000 00000000 00000001
*/
#include <stdio.h>

int circular_right(int, int);                               //Declaring the function
int print_bits(int);                                        //Declaring the function

int main()                          
{
    int num, n, ret;                                        //Declaring variables num, n, ret
    
    printf("Enter num: ");                                  //Asking the user to enter num
    scanf("%d", &num);                                      //Reading num from user
    
    printf("Enter n : ");                                   //Asking the user to enter n value
    scanf("%d", &n);                                        //Reading n from user
    
    ret = circular_right(num, n);                           //Calling the function and storing the returned value
    
    print_bits(ret);                                        //Calling the function

    return 0;
}  

int circular_right(int num, int n)                          //Function the definition
{
    int get_last_nbits = (num & ((1 << n) - 1)) << (32 - n); //Getting last nbits

    int right_shift_ntimes = (unsigned int)num >> n;         //Right shift ntimes                              

    int circular_right_shift = get_last_nbits | right_shift_ntimes ;  //Circular right shifting         

    return circular_right_shift;                            //Returning the circular right shifted value
    
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
