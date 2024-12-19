/*
Name: Kesari Vishnu
Description: WAP to print all possible combinations of given string.
Date:04/05/23
Sample I/P: Enter a string: abc
Sample O/P:
            All possible combinations of given string :abc
            acb
            bca
            bac
            cab
            cba

 */

#include <stdio.h>

void swap(char*,char*);                 //Function prototype
void combination(char [],int ,int );    //Function prototype
int my_strlen(char []);                 //Function prototype


int main()
{
    char str[100];                  //Declaration of character array str
    printf("Enter a string: ");     //Printing the message
    scanf("%100[^\n]",str);         //Reading string from user
    int n = my_strlen(str);     //Calling the function and collecting in n
    int count = 0;                  //count for distinct characters
    for(int i=0;i<n-1;i++)      //Outer loop
    {
        for(int j=i;j<n;j++)    //Inner loop
        {
            if(str[i]==str[j+1])    // if str[i]==str[j+1] then increment cntr
                count++;
        }
    }
    
    if(!count)
    {                   
        printf("All possible combinations of given string :");//Printing the message
        combination(str,0,n-1);                               //Calling the  combination function
    }
    else
    {
        printf("Error: please enter distinct characters");  //Print error message
    }

        return 0;
}



void swap(char* x, char* y)         //Swap function
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void combination(char* a, int l, int r) //Function definition
{
    int i;                              //Declaring variable i
    if (l == r)                         //Printing the combination if l = r
        printf("%s\n", a);
    else 
    {
        for (i = l; i <= r; i++)        //Running the loop
        {
            swap((a + l), (a + i));     //Calling the swap function
            combination(a, l + 1, r);   //Recursively calling combination function
            swap((a + l), (a + i));     //Calling the swap function
        }
    }
}

int my_strlen(char * str)           //Function definition
{
    int count = 0;                  //count = 0
    for(int i = 0; str[i] != '\0'; i++)   //Running the loop till null character 
        count++;                //Increment count
    return count;               //Return count
}
