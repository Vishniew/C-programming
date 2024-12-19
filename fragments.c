/*
Name: Kesari Vishnu
Date: 29-05-2023
Description: A49 - WAP to implement fragments using Array of Pointers
Sample I/P:Enter no.of rows : 3
           Enter no of columns in row[0] : 4
           Enter no of columns in row[1] : 3
           Enter no of columns in row[2] : 5
           Enter 4 values for row[0] : 1 2 3 4
           Enter 3 values for row[1] : 2 5 9
           Enter 5 values for row[2] : 1 3 2 4 1
Sample O/P:Before sorting output is:

           1.000000 2.000000 3.000000 4.000000 2.500000

           2.000000 5.000000 9.000000 5.333333

           1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

           After sorting output is:

           1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

           1.000000 2.000000 3.000000 4.000000 2.500000

           2.000000 5.000000 9.000000 5.333333
*/
#include<stdio.h>
#include<stdlib.h>
void fragments(int,float **);                             //function declaration
int main()                                                //main function
{
    int row;                                              //declaring the integer variables
    float **arr;                                          //declaring the multi pointer array
    printf("Enter no.of rows :");                         //printing enter number of rows
    scanf("%d",&row);                                     //storing the value in row
    arr=(float **)calloc(row,sizeof(int *));              //assigning the dynamic memory for rows
    fragments(row,arr);                                   //function call
}
void fragments(int row,float **arr)                       //function definition
{
    int i,j,k,temp2,size[row],count=0,col;                //declaring the integer variables
    float *temp,sum=0;                                    //declaring the float pointer variable
    for (i=0;i<row;i++)                                   //for loop checking from i=0 to i less than row
    {
    printf("Enter no of columns in row[%d] :\n",i);       //printing enter number of columns in row[i]
    scanf("%d",&size[i]);                                 //storing the value in size[i]
    arr[i]=(float *)calloc(col+1,sizeof(int));            //dynamic memory alloaction for column
    }
    for (i=0;i<row;i++)                                   //for loop checking from i=0 to i less than row
    {
        printf("Enter %d values for row[%d] :\n",size[i],i);//printing enter i values for row[i]
        for (j=0;j<size[i];j++)                           //for loop checking from i=0 to i less than row
        {
            scanf("%f",&arr[i][j]);                       //storing the float value in arr[i][j]
        }
        for (k=0;k<size[i];k++)                           //for loop checking from i=0 to i less than size[i]
        {
            sum=sum+arr[i][k];                            //assigning sum+arr[i][j] to sum
            count=count+1;                                //increasing the count by 1
        }
        sum=sum/count;                                    //sum diveded by count assigning to sum
        arr[i][j]=sum;                                    //sumvalue assigning to arr[i][j]
        sum=0;                                            //assigning 0 to sum
        count=0;                                          //assigning 0 to count
    }
    printf("Before sorting output is:\n");                //printing before sorting output is
    for (i=0;i<row;i++)                                   //for loop checking from i=0 to i less than row
    {
        for (j=0;j<size[i]+1;j++)                         //for loop checking from j=0 to j less than size[i]+1
        {
            printf("%f ",arr[i][j]);                      //Printing arr[i][j] value
        }
        printf("\n");                                     //Printing new line
    }
    for (i=0;i<row;i++)                                   //For loop checking from i=0 to i less than row
    {
        for (j=0;j<row;j++)                               //For loop checking from j=0 to j less than row
        {
            if (arr[j][size[j]] >= arr[i][size[i]])       //If condition checking arr[j][size[j]] greter than or equals to arr[i][size[i]] or not
            {
                temp=arr[j];                              //If condition true arr[j] assigning to temp
                arr[j]=arr[i];                            //Arr[i] assigning to arr[j]
                arr[i]=temp;                              //Assigning temp  to arr[i]
                temp2=size[j];                            //Size[j] assigning to temp2
                size[j]=size[i];                          //Size[i] assigning to size[j]
                size[i]=temp2;                            //Assigning temp2 to size[i]
            }
        }
    }
    printf("After sorting output is:\n");                 //Printing after sorting output
    for (i=0;i<row;i++)                                   //For loop checking from i=0 to i less than row
    {
        for (j=0;j<size[i]+1;j++)                         //For loop checking from j=0 to j less than size[i]+1
        {
            printf("%f ",arr[i][j]);                      //Printing the arr[i][j] value
        }
        printf("\n");                                     //Printing new line
    }
}
