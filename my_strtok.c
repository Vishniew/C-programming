/*
Name: Kesari Vishnu
Description: WAP to implement strtok function
Date: 30-05-2023
Sample I/P:
Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
Enter string2 : ;./-:
Sample O/P:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);		//Function prototype
int my_strlen(const char*);							//Function prototype
char *my_strcpy(char*,char*);							//Function prototype
int NoofLastDel(char*str,int len);						//Function prototype

int main()
{
    char str[50], delim[50];							//Declare str and delimeter
    printf("Enter the string  : ");						//Printing message
    scanf("%s", str);								//Get input from user
    __fpurge(stdout);								//Empty output buffer
    printf("Enter the delimeter : ");					//Printing message
    scanf("\n%s", delim);                           // get delimeter
    __fpurge(stdout);                               //empty output buffer
    char *token = my_strtok(str, delim);            // call function and get tokens
    printf("Tokens :\n");
    while (token)                                       // run whlie loop till we dont get NULL
    {   printf("%s\n", token);                          //print first string
        token = my_strtok(NULL, delim);                 // get next token
    }
}
char *my_strtok(char str[], const char delim[]){        //define mystrtok
    static char*ptr=NULL;                               // static ptr 
    static unsigned int pos=0;                          // static unsigned int pos
    static int MstrLen=0;                               // static in MstrLen ie main string length
    if(str!=NULL){                                      // if str!=NULL then proceed
        MstrLen=my_strlen(str);                             // get length of main string
        ptr=malloc(MstrLen);                            //dynamically allocate memory of length MstrLen and point it with ptr
        my_strcpy(ptr,str);                             //copy main string in dynamic string
        
        int delLen=my_strlen(delim);                //get delimiter string length
        
        for(int i=0;i<MstrLen;i++){                     //run this loop till Mstrlen
            for(int j=0;j<delLen;j++){                  // run this for loop till delimiter string length
                if(str[i]==delim[j]){                   //keeping str[i] constant compare str[i] with delim[j] if equal then proceed
                    ptr[i]='\0';                        // make delimeter in ptr[i] as null character
                }
            }   
        }
        if(ptr[0]=='\0'){					//if it starts with null character then we need to update position
            for(int i=0; ;i++){				// runfor loop continously
                if(ptr[i]!='\0'){			// if we get ptr[i] other than null char then only proceed
                    pos=i;					// update position with i
                    return ptr+i;			// return ptr+i
                }
            }
        }
        return ptr;							//if the ptr does not start with null character then return ptr ie address
    }
    else if(str==NULL)
	{
		int flag = 0;						//Initialize flag as 0
        for(int i=pos;i<MstrLen;i++)		//run for loop from i= pos till MstrLen
		{
			if(ptr[i]=='\0')				//if we get null character then
			{
				for(int j=i;j<MstrLen;j++)	//search for next character which will not be null
				{
					if(ptr[j]!='\0')		// if we get other than null character then
					{
						flag=j;				//Updating flag to j
                    	break;
                    }
                }
            }
            if((pos+my_strlen(pos+ptr))<MstrLen-NoofLastDel(ptr,MstrLen))
			{
				if(flag)
				{
					pos	= flag;                           //Copy flag to pos
                    return ptr+pos; 
                }
            }
            else
                return NULL;							//else return NULL
        }               
    }
}
int NoofLastDel(char*str,int len){						//check how how many delimeter are there from last of string ptr
    int sub=-1;// sub=-1
    for(int i=len;i>0;i--){							//run for loop from i=len till i>0 with decrementation
        sub++;									// increment sub
    if(str[i]!='\0')								// if we get get character other than null then break
        break;
    }
    return sub; 								// return how many null character(ie delimeter) are there in string ptr at end of string
}
char * my_strcpy(char*strDst,char*strSrc){					// string copy
    int i=0;									//i=0
    for(i=0;strSrc[i]!='\0';i++)						// run for loop till src string reaches null character
        strDst[i]=strSrc[i];							//copy src string in dst
    strDst[i]='\0';								// add null character at the end of dst string
    return strDst;								// return pointer to dst string
}
int my_strlen(const char*str){							// get string length
    int cntr=0;									// make cntr=0
    for(int i=0;str[i]!='\0';i++)						// run for loop from i=0 till we get null character
        cntr++;									// increment cntr
    return cntr;								// return cntr
}
