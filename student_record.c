/*
Name: Kesari Vishnu
Date: 28-05-2023
Description:WAP to Implement the student record using array of structures
Sample I/P:Enter no.of students : 2
           Enter no.of subjects : 2
           Enter the name of subject 1 : Maths
           Enter the name of subject 2 : Science
           ----------Enter the student datails-------------
           Enter the student Roll no. : 1
           Enter the student 1 name : Nandhu
           Enter Maths mark : 99
           Enter Science mark : 91
           ----------Enter the student datails-------------
           Enter the student Roll no. : 2
           Enter the student 2 name : Bindhu
           Enter Maths mark : 88
           Enter Science mark : 78
Sample O/P:----Display Menu----
           1. All student details
           2. Particular student details
           Enter your choice : 2

           ----Menu for Particular student----
           1. Name.
           2. Roll no.
           Enter you choice : 1
           Enter the name of the student : Nandhu
           Roll No.   Name           Maths         Science       Average       Grade
           1              Nandhu        99               91                95                  A
           Do you want to continue to display(Y/n) : n
*/
#include<stdio.h>
#include<string.h>
struct student                                                      //structure
{
    int Rollno;
    char name[50];
    int marks[50];
    int average;
    char grade;
};
int main()
{
    int students,subjects,i,j,k,average,choice,option,sno,repeat=1; //declaring the integer variables
    char sname[50],repeatchar;                                      //declaring the character variables
    printf("Enter no.of students :");                               //reading the details from the user
    scanf("%d",&students);
    struct student s[students];
    printf("Enter no.of subjects :");
    scanf("%d",&subjects);
    char subject[subjects][20];
    for (i=0;i<subjects;i++)
    {
        printf("Enter the name of subject %d:",i+1);
        scanf("%s",subject[i]);
    }
    for (i=0;i<students;i++)
    {
        printf("-----Enter the students details-----\n");
        printf("enter student roll no.:");
        scanf("%d",&s[i].Rollno);
        printf("Enter student %d name:",s[i].Rollno);
        getchar();
        scanf("%[^\n]",s[i].name);
        s[i].average=0;
        for (j=0;j<subjects;j++)
        {
            printf("enter %s marks:",subject[j]);
            scanf("%d",&s[i].marks[j]);
            s[i].average=(s[i].marks[j])+s[i].average;
        }
        s[i].average=(s[i].average)/subjects;
        if (s[i].average > 90)                                      //grade allocation
        {
            s[i].grade='A';
        }
        else if(s[i].average > 70 && s[i].average <= 90)
        {
            s[i].grade='B';
        }
        else if(s[i].average > 50 && s[i].average <= 70)
        {
            s[i].grade='C';
        }
        else
        {
            s[i].grade='F';
        }
    }
    while (repeat != 0)
    {
        printf("----Display Menu---\n");                            //display the menu
        printf("1.All students deatils\n");
        printf("2.particular student details\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                for (i=0;i<students;i++)
                {
                    printf("Roll No.Name\t");
                    for (j=0;j<subjects;j++)
                    {
                        printf("%s\t",subject[j]);
                    }
                    printf("Average\tGrade\n");
                    printf("%d\t%s\t",s[i].Rollno,s[i].name);       //printing the user details
                    for (j=0;j<subjects;j++)
                    {
                        printf("%d\t",s[i].marks[j]);
                    }
                    printf("%d\t",s[i].average);
                    printf("%c\n",s[i].grade);
                }
                break;
            case 2:
                {
                    printf("---Menu for particular student---\n");  //display the menu for particular student
                    printf("1)Name\n2)Roll no\nEnter your choice\n");//printing roll no or name
                    scanf("%d",&option);
                    if (option == 1)
                    {
                        printf("enter Name\n");
                        getchar();
                        scanf("%[^\n]",sname);
                        for (i=0;i<students;i++)
                        {
                            if (!strcmp(sname , s[i].name))
                            {
                                printf("Roll No.Name\t");
                                for (j=0;j<subjects;j++)
                                {
                                    printf("%s\t",subject[j]);
                                }
                                printf("Average\tGrade\n");
                                printf("%d\t%s\t",s[i].Rollno,s[i].name); //printing the user details
                                for (j=0;j<subjects;j++)
                                {
                                    printf("%d\t",s[i].marks[j]);
                                }
                                printf("%d\t",s[i].average);
                                printf("%c\n",s[i].grade);
                            }
                        }
                    }
                    else if (option == 2)                           //printing the deatils for user selected roll no
                    {
                        printf("enter Roll no\n");
                        scanf("%d",&sno);
                        for (i=0;i<students;i++)
                        {
                            if (s[i].Rollno == sno)
                            {
                                printf("Roll No.Name\t");
                                for (j=0;j<subjects;j++)
                                {
                                    printf("%s\t",subject[j]);
                                }
                                printf("Average\tGrade\n");
                                printf("%d\t%s\t",s[i].Rollno,s[i].name);
                                for (j=0;j<subjects;j++)
                                {
                                    printf("%d\t",s[i].marks[j]);
                                }
                                printf("%d\t",s[i].average);
                                printf("%c\n",s[i].grade);
                            }
                        }
                    }
                    break;
                }
        }
        printf("do you want to continue to display(y/n)\n");        //printing do you want to continue to display
        getchar();
        scanf("%c",&repeatchar);
        if (repeatchar == 'y'|| repeatchar == 'y')                  //if y then repeat the loop
        {
            repeat=1;
        }
        else if (repeatchar == 'n'|| repeatchar == 'N')             //else end the loop
        {
            repeat=0;
        }
    }
}