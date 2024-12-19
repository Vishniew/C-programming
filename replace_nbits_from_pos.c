/*
Name: Kesari Vishnu
Description: WAP to put the (b-a+1) lsb’s of num into val[b:a]
Date: 25-03-2023
Sample I/P: Enter the value of 'num' : 11
            Enter the value of 'a' : 3
            Enter the value of 'b' : 5
            Enter the value of 'val': 174
Sample O/P: Result 158
*/
#include <stdio.h>
int replace_nbits_from_pos(int num, int a, int b, int val); //Declaring function definition
int main()
{
    int num, a, b, val, result;                             //Declaring variables num, a, b, val, result
    printf("Enter the value of 'num' : ");                  //Asking the user to enter value of num
    scanf("%d",&num);                                       //Reading num value from user
    printf("Enter the value of 'a' : ");                    //Asking the user to enter value of a
    scanf("%d",&a);                                         //Reading a value from user
    printf("Enter the value of 'b' : ");                    //Asking the user to enter value of b
    scanf("%d",&b);                                         //Reading b value from user
    printf("Enter the value of 'val': ");                   //Asking the user to enter value of val
    scanf("%d",&val);                                       //Reading val value from user

    if (a <= b & b <= 31)                                   //Checking whether b is in limit of a<=b<=31                                           
    {
        result = replace_nbits_from_pos(num, a, b, val);    //Storing returned value of function
        
        printf("Result : %d\n",result);                     //Printing Result 
    }
    else
    {
        printf("b value not in (a <= b <= 31)\n");          //Error message if b not in limit (a <= b <= 31)
    }
    return 0;
}

int replace_nbits_from_pos(int num, int a, int b, int val)  //Function definition
{

    int no_of_bits, get_nbits_of_num, clear_nbits_from_bth_pos, result; //Declaring variables no_of_bits, get_nbits_of_num, clear_nbits_from_bth_pos, result
    
    no_of_bits = (b - a + 1) ;                                          //Calculating no. of bits

    clear_nbits_from_bth_pos = val & ~(((1 << no_of_bits) - 1) << ( b - no_of_bits + 1 ));  //Clearing n bits from bth position

    get_nbits_of_num = num & ((1 << no_of_bits ) - 1 );                 //Getting n bits of num

    result = clear_nbits_from_bth_pos | (get_nbits_of_num << no_of_bits) ; //Replacing n bits from position and storing in result variable

    return result;                                                      //Returning result

}