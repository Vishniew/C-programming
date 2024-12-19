/*
Name: Kesari Vishnu
Date: 26-05-2023
Description : Provide a menu to manipulate or display the value of variable of type t
Sample i/p : Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Sample o/p : Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4


*/
#include <stdio.h>
#include <stdlib.h>
short int int_flag,int_flag1,char_flag,short_flag,double_flag;		//Declaring flags of different data types
void Add_element(void *mem); 										//Add element function prototype
void remove_element(void *mem);										//Remove element function prototype
void display_element(void *mem);									//Display element function prototype
int main()
{
    int option,option1;												//Declaring the variables
    void *mem = calloc(1 , sizeof(double)); 						//Allocating the memory dynamically
	while (1)
    {
    printf("Menu :\n");												//Displaying the menu
    printf("1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
    printf("Enter your choice :");
    scanf("%d",&option);											//Reading option from user
    switch (option) 												//Calling the function as per the  option from user
    {
        case 1: Add_element(mem);
            break;
        case 2: remove_element(mem);
            break;
        case 3: display_element(mem);
            break;
        case 4: exit(0);
            break;
        default :printf("Invalid choice : Enter only given choice \n");
    }
    }
    return 0;
}
void Add_element(void *mem)					//Add element function definition
{
    int option1;
    printf("Enter the type you have to insert:\n");
    printf("1. int\n2. char\n3.short\n4. float\n5. double\n");
    printf("Enter your choice :");
    scanf("%d",&option1);
    switch (option1)
    {
    case 1: if(int_flag == 0 && double_flag == 0)  
        {
            printf("Enter int element :");
            scanf("%d", ((int *)mem + 1)); 			           
            int_flag = 1;                     
            int_flag1 = 1;
        }
        else
            printf("dont have enough space to store\n");
        break;

    case 2: if(char_flag == 0 && double_flag == 0)
        {
            printf("Enter char element :");
            scanf(" %c", ((char *)mem + 2)); 
            char_flag = 1; 
        }
        else
            printf("dont have enough space to store\n");
        break;
    case 3: if(short_flag == 0 && double_flag == 0)
        {
            printf("Enter shortt element :");
            scanf("%hd", ((short *)mem + 0)); 
            short_flag = 1;
        }
        else
            printf("dont have enough space to store\n");
        break;
    case 4: if (int_flag == 0 && double_flag == 0)
        {
            printf("Enter the float number : ");
            scanf("%f", ((float *)mem + 1)); 
            int_flag = 1;
        }
        else
            printf("dont have enough space to store\n");
        break;

    case 5: if(double_flag == 0 && int_flag == 0 && char_flag == 0 && short_flag == 0)
        {
            printf("Enter double type element :");
            scanf("%lf", ((double *)mem + 0)); 
            double_flag = 1;
        }
        else
            printf("dont have enough space to store\n");
        break;
    default : printf("Invalid choice : please enter only given choices only\n");
    }
}
void remove_element(void *mem)										//Remove element function definition
{
    int option1;
    display_element(mem);											//Calling the display element function
    printf("Enter the index value you have to delete:\n");
    printf("Enter your choice :");
    scanf("%d",&option1);											//Reading option from user
    switch (option1)
    {
    case 0: if(int_flag == 1)
         {
             int_flag = 0;
             int_flag1 = 0;
             printf("index %d is successfully deleted\n",option1);
         }
         else
             printf("there is nothing to delete\n");
         break;
    case 1: if(char_flag == 1)
         {
             char_flag = 0;
             printf("index %d is successfully deleted\n",option1);
         }
         else
             printf("there is nothing to delete\n");
         break;
    case 2: if(short_flag == 1)
         {
             short_flag = 0;
             printf("index %d is successfully deleted\n",option1);
         }
         else
             printf("there is nothing to delete\n");
         break;
    case 3:
         if (int_flag == 1)
         {
             int_flag = 0;
             printf("index %d is successfully deleted\n",option1);
         }
         else
             printf("there is nothing to delete\n");
         break;
    case 4:
         if(double_flag == 1)
         {
             double_flag = 0;
             printf("index %d is successfully deleted\n",option1);
         }
         else
             printf("there is nothing to delete\n");
         break;
    default :printf("invalid input : choose only given choices\n");
    }
}
void display_element(void *mem)									//Display Element function definition
{
    if( int_flag || char_flag || short_flag || double_flag )	//Checking anyone of the  data type flags are 1
    {
    printf("-------------------\n");
    if(int_flag && int_flag1)									//checking the int flag
        printf("0--->%d (int)\n",*((int *)mem + 1));
    if(char_flag)												//checking the char flag
        printf("1--->%c (char)\n",*((char *)mem + 2));
    if(short_flag)												//checking the short flag
        printf("2--->%hd (short)\n",*((short *)mem + 0));
    if(int_flag && int_flag1 == 0)								//checking the float flag
        printf("3--->%g (float)\n",*((float *)mem + 1));
    if(double_flag)												//checking the double flag
        printf("4--->%g (double)\n",*((double *)mem + 0));		
    printf("-------------------\n");
    }
    else
    printf("Memory is empty it contains nothing to print\n");	//Printing the message
}
