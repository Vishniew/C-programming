/*
Name: Kesari Vishnu
Description: WAP to generate AP, GP, HP series
Date: 13-03-2023
Sample I/P: Enter the First Number 'A': 2
            Enter the Common Difference / Ratio 'R': 3
            Enter the number of terms 'N': 5
Sample O/P: AP = 2, 5, 8, 11, 14
            GP = 2, 6, 18, 54, 162
            HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/
#include <stdio.h>
int main()
{
    int A, R, N;                                            //Declaring the variables A, R, N as int
    printf("Enter the First Number 'A': ");                 //Asking the user to Enter first number 'A'
    scanf("%d",&A);                                         //Reading the first number
    printf("Enter the Common Difference / Ratio 'R': ");    //Asking the user to Enter common difference/ratio 'R'
    scanf("%d",&R);                                         //Reading the common difference/ratio
    printf("Enter the number of terms 'N': ");              //Asking the user to enter number of  terms
    scanf("%d",&N);                                         //Reading the number of terms 'N' 
    if (A > 0 && R > 0 && N > 0)                            //Checking whether A,R,N are positive
    {
        int AP = A;                                        //Initialising variable AP = A
        printf("AP = %d, ",A);                             //Printing first term     
        for(int i = 1 ; i < N ; i++)                       //Running the for loop N no. of times
        {
            AP = AP + R;                                   //Updating AP as AP + R
            printf("%d",AP);                               //Printing the AP series value
            if (i < N-1)                                   //Checking if 'i' is less than N-1
            {
                printf(", ");                              //Printing the comma
        
            }
        }
        printf("\n");                                      //Printing next line
        int GP = A;                                        //Initialising variable GP = A
        printf("GP = %d, ",A);                             //Printing the first term in GP series
        for(int i = 1 ; i < N ; i++)                       //Running the for loop N no. of times
        {
            GP = GP * R;                                   //Updating AP as GP * R
            printf("%d",GP);                               //Printing the GP series value
            if (i < N-1)                                   //Checking if 'i' is less than N-1
            {
                printf(", ");                              //Printing the comma
        
            }
        }
        printf("\n");                                      //Printing next line
        int ap = A;                                        //Initialising variable ap=A
        float HP;                                          //Declaring variable HP as float
        HP=(float)1/ap;                                    //Updating HP with reciprocal of ap by typecasting with float
        printf("HP = %f, ",HP);                            //Printing the first term in HP series
        for(int i = 1 ; i < N ; i++)                       //Running the for loop N no. of times
        {
            ap = ap + R;                                   //Updating ap with ap + R
            HP = (float)1 / ap ;                           //Updating HP with reciprocal of ap by typecasting with float
            printf("%f",HP);                               //Printing the first HP series value
            if (i < N-1)                                   //Checking if 'i' is less than N-1
                printf(", ");                              //Printing the comma

        }
    }
    else
    {
        printf("Invalid input");                           //Printing the error message as Invalid option
    }
    printf("\n");                                          //To print next line
    return 0;
}
