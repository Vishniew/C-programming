/*
Name: Kesari Vishnu
Description: WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Date:27-05-2023
Sample  I/O:
Sample  O/P:
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
 */
#include<stdio.h>

#define SWAP(a, b, c) \
    do { \
        a temp=b; \
        b=c;\
        c=temp;\
    } while(0)

int main()
{
    int v;                                  
    printf("Enter the type you want: \n");
    printf("1. Int\n");
    printf("2. Char\n");
    printf("3. Short\n");
    printf("4. Float\n");
    printf("5. Double\n");
    printf("6. String\n");
    printf("Enter your choice: ");
    
    scanf("%d",&v);                     //Reading choice from user
    printf("\n");
    switch(v)                          //Switch case
    {
        case 1:                        
            {
                int x,y;               
                printf("Enter the num1 : ");     //Taking two integer values from user
                scanf("%d",&x);
                printf("Enter the num2 : ");
                scanf("%d",&y);
                SWAP(int,x,y);         //Calling the macro
                printf("After Swapping : \n");  //Printing the message
                printf("num1:%d\n",x);
                printf("num2:%d\n",y);
                break;
            }
        case 2:                   
            {
                char x,y;
                getchar();
                printf("Enter the num1 : ");  //Taking two character values from user
                scanf("%c",&x);
                getchar();
                printf("Enter the num2 : ");
                scanf("%c",&y);
                SWAP(char,x,y);              //Calling the macro
                printf("After Swapping : \n");  //Printing the message
				printf("num1:%c\n",x);
                printf("num2:%c\n",y);
                break;
            }
        case 3:
            {
                short x,y;                 
                printf("Enter the num1 : "); //Taking two short values from user
                scanf("%hd",&x);
                printf("Enter the num2 : ");
                scanf("%hd",&y);
                SWAP(short,x,y);              //Calling the macro
                printf("After Swapping : \n");  //Print the message
                printf("num1:%hd\n",x);
                printf("num2:%hd\n",y);
                break;
            }
        case 4:                          
            {
                float x,y;
                printf("Enter the num1 : "); //Taking two float values from user
                scanf("%f",&x);
                printf("Enter the num2 : ");
                scanf("%f",&y);
                SWAP(float,x,y);            //Calling the macro
                printf("After Swapping : \n"); //Printing the messages
                printf("num1:%f\n",x);
                printf("num2:%f\n",y);
                break;
            }
        case 5:
            {
                double x,y;                  
                printf("Enter the num1 : "); //Taking two double values from user
                scanf("%lf",&x);
                printf("Enter the num2 : ");
                scanf("%lf",&y);
                SWAP(double,x,y);             //Calling the macro
                printf("After Swapping : \n");  //Printing the mesages
                printf("num1:%lf\n",x);
                printf("num2:%lf\n",y);
                break;
            }
        case 6:
            {                           
                char str1[100], str2[100];  //Swapping two strings
                char *ptr1 = str1; //ptr1 holding address of str1
                char *ptr2 = str2;  //ptr2 holding the address of str2
                printf("Enter the str1 : ");  //Taking strings from user
                getchar();
                scanf("%[^\n]", str1);
                printf("Enter the str2 : ");
                getchar();
                scanf("%[^\n]", str2);
                SWAP(char *, ptr1, ptr2);         //Calling Macro
                printf("After Swapping : \n");   //Printing after swapping
                printf("str1 : %s\n", ptr1);
                printf("str2 : %s\n", ptr2);
                break;
			}
        default:                               //Default case
            printf("Invalid choice!\n");
    }    
	return 0;
}
