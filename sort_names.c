/*
Name: Kesari Vishnu
Date: 29-05-2023
Description: WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample I/P:Enter the 5 names of length max 20 characters in each
           [0] -> Delhi
           [1] -> Agra
           [2] -> Kolkata
           [3] -> Bengaluru
           [4] -> Chennai
Sample O/P:The sorted names are:
           Agra
           Bengaluru
           Chennai
           Delhi
           Kolkata
*/
#include<stdio.h>
#include<stdlib.h>
void sort_names(char (*str)[20], int);                                          //Function declaration for sorting nemes
int my_strcmp(char *s1, char *s2);                                              //Function declaration for string compare
void my_strcpy(char *s1, char *s2);                                             //Function declaration for string copy
int main()
{
    int size, i;                                                                //Declaring the integer variables
    printf("Enter the size : ");                                                //Enter the size
    scanf("%d", &size);                                                         //Storing the value in size
    char (*str)[20] = malloc(sizeof(char[20]) * size);                          //Allocating memory dynamically
    printf("Enter the %d names of length max 20 characters in each\n", size);   //Printing Enter the size names of length max 20 characters in each
    for(i = 0; i < size; i++)                                                         //For loop checking from i=0 to i less than size
    {
        printf("[%d] ->", i);                                                   //Printing i value
        scanf("%s", str[i]);                                                    //Reading the string from the user
    }
    sort_names(str, size);                                                      //Function call
    printf("The sorted names are :\n");                                          //Printing The sorted names are
    for(i=0;i<size;i++)                                                         //For loop checking from i=0 to i less than size
    {
        printf("%s\n", str[i]);                                                 //Printing the string
    }

    free(str);                                                                  //Free the memory
}

void sort_names(char (*str)[20], int size)                                      //Function definition
{
    char temp[20];                                                              //Declare character array
    for(int i = 0; i < size; i++)                                               //For loop checking from i=0 to i less than size
    {
        for(int j = i+1; j < size; j++)
        {
            if(my_strcmp(str[i], str[j]) > 0)                                   //Function call for string compare
            {
                my_strcpy(temp, str[i]);                                        //Function call for string copy
                my_strcpy(str[i], str[j]);                                      //Function call for string copy
                my_strcpy(str[j],temp);                                         //Function call for string copy
            }
        }
    }
}

int my_strcmp(char *s1, char *s2)                                               //Function definition for string compare
{
    while((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)                           //While loop checking
    {
    	s1++;                                                                   //Increamenting s1
    	s2++;                                                                   //Increamenting s2
    }
	if(*s1 == *s2)                                                              //If condition checking *s1 and *s2 are equal or not
	{
	    return 0;                                                               
	}
	else
	{
	    return *s1 - *s2;                                                       //else return *s1-*s2
	}
}

void my_strcpy(char *s1, char *s2)                                              //Function definition for string copy
{
    int i=0;
    while(s2[i]!='\0')                                                          //While loop checking s2[i] not equals to \0 or not
    {
        s1[i]=s2[i];                                                            //If true assigning s2[i] to s1[i]
        i++;                                                                    //Increamenting of i
    }
    s1[i]='\0';                                                                 //Assigning \0 to s1[i]
}
