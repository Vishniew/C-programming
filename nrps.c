/*
Name: Kesari Vishnu
Description: WAP to Generate consecutive NRPS of length n using k distinct character
Date: 14/05/23
Sample I/P:
            Enter the number characters C : 3
            Enter the Length of the string N : 6
            Enter 3 distinct characters : a b c
Sample O/P:
            Possible NRPS is abcbca
*/


#include <stdio.h>

void nrps(char [], int, int);           //Function prototype
void swap(char *,char*);                //Function prototype
int main()
{
    
    int n = 0;
    printf("Enter the number characters C : ");      //Printing message
    scanf("%d",&n);                     //Reading n value from user
    printf("Enter the Length of the string N : ");           //Printing message
    int len = 0;
    scanf("%d",&len);                   //Reading length from user
    char str[n];
    printf("Enter %d distinct characters : ",n);           //Printing message
    scanf("%s",str);                    //Reading string  from user

    
    int count = 0;                         //Count for distinct chars
    for(int i = 0; i < n-1; i++)        //Check distinct char run for loop from i=0 till i<n-1
    {
        for(int j=i;j<n;j++)           //Running the inner loop 
        {
            if(str[i] == str[j+1])                 
            {
                count++;                 //Incrementing count
        
            }
        }
    }
    
    if(!count)
    {
        printf("Possible NRPS is ");                //Printing possible nrps        
        nrps(str,n,len);                            //Calling Function
    }
    else                                           // print error message
    {
        printf("Error : Enter distinct characters");    //Printing error message
    }

}

void nrps(char str[], int n, int len)           //Function definition
{
    char arr[n];                                //Duplicate array creation
    for(int i=0;i<n;i++)                       //Copying str to duplicate array arr
    {
        arr[i]=str[i];
    } 
   swap(&arr[1],&arr[2]);                       //Swapping 1st and 2nd index of arr
  
       char newArr[len];                        //Creating new array with length len
       int flag=0;                              //flag = 0
       for(int i=0;i<len;i+=n)                 //Running loop from i=0 to i<len with incrementation of i by n times
       { 
           if(flag==0)                        // if flag == 0
           { 
               for(int j=0;j<n;j++)         //Running for loop from j=0 till j<n
               { 
                   newArr[i+j] = str[j];     //Copying content of str in newArr[i+j]
               }
              flag=1;                       //Updating flag to 1
           }
           else                            //If flag not zero then execute this
           {
                for(int j=0;j<n;j++)        //Running for loop from j=0 till j<n
                {
                    newArr[i+j]=arr[j];     //Copying content of arr in newArr[i+j]
                }
                flag=0;                     //Updating flag to 0

            }
       
       }
       newArr[len]='\0';                    //Adding null character at newArr[len]
       printf("%s",newArr);                 //Printing newArr

}


void swap(char *a,char*b)   //Swap function 
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
