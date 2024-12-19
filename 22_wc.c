/*Name: Kesari Vishnu
Description: WAP to count no. of characters, words and lines, entered through stdin
Date: 03-05-2023
Sample input:   Hello world
                Dennis Ritchie
                Linux
Sample output:  Character count : 33
                Line count : 3
                Word count : 5
*/
#include<stdio.h>
int main()
{
    char str[200];                                      
    char ch;                            
    int i = 0,j = 0,word_c = 0,line_c = 0,char_c = 0;   
    while((ch = getchar()) != EOF )                    
    {
        str[j] = ch;
        j++;
    }
    while(str[i] != '\0' )                              
    {
        if ( str[i] == ' ' || str[i] == '\t' || str[i] == '\n' )
        {
            if ( str[i-1] != ' ' && str[i-1] != '\t' && str[i-1] != '\n' )
            {
                word_c++;
            }
            if ( str[i] == '\n' )
            {
                line_c++;

            }
            char_c++;
            i++;
        }
        else
        {
            char_c++;
            i++;
        }
    }
    printf("\nCharacter count : %d\n",char_c);          
    printf("Line count : %d\n",line_c);                 
    printf("Word count : %d\n",word_c);                 
    return 0;
}
