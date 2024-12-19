/*
Name: Kesari Vishnu
Description:A51 - WAP to find the product of given matrix.
Date:09/05/23
Sample I/P:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      1     1
2      2     2
3      3     3
Sample O/P:
Product of two matrix :
14      14      14
14      14      14
14      14      14
 */
#include <stdio.h>
#include <stdlib.h>
int **matrix_mul(int **, int, int, int **, int, int);// prototype
void free_matrix(int**,int);// prototype
int **Create_matrix(int row,int col);// prototype
void printMat(int**mat,int row,int col);// prototype
void scanMat(int**mat,int row,int col);// prototype
int main()
{
    int row1,col1;// declare row and col for first array
    printf("Enter number of rows : ");// print message
    scanf("%d",&row1);// get number of rows
    printf("Enter number of columns : ");// print message
    scanf("%d",&col1);// get number of cols
    int **mat1=Create_matrix(row1,col1); //create matrix of row1 rows and col1 columns
    printf("Enter values for 3 x 3 matrix : \n");// print message
    scanMat(mat1,row1,col1);// get elements for each rows

    int row2,col2;// declare for matrix 2
    printf("Enter number of rows : ");
    scanf("%d",&row2);// get row col inputs for matrix2
    printf("Enter number of columns : ");
    scanf("%d",&col2);
    
    if(col1!=row2){// if no.of col of first matrix is not equals to number of rows of second matrix then matrix multiplication cannot happen 
        free_matrix(mat1,row1);    // in such case free matrix1
        printf("Error:Matrix multiplication is not possible");// print error
        return 0;    // terminate program
    }
    int **mat2=Create_matrix(row2,col2); // ir col1 and row2 are equal then allocate memory for matrix2
    printf("Enter values for 3 x 3 matrix : \n");// print message
    scanMat(mat2,row2,col2);// get elements for matrix2
    int**resultMat=matrix_mul(mat1,row1,col1,mat2,row2,col2);
    printMat(resultMat,row1,col2);// print matrix2
    free_matrix(mat1,row1);// free memory of matrix1
    free_matrix(mat2,row2);// free memory of matrix2
    free_matrix(resultMat,row1);// free memory of result matrix
    return 0;
}
int **Create_matrix(int row,int col){// define create matrix
    int **mat=calloc(row,sizeof(int*));//allocate rows
    for(int i=0;i<row;i++){// for each row allocate column
        mat[i]=calloc(col,sizeof(int));
    }
    return mat;// return pointer to that matrix
}
void scanMat(int**mat,int row,int col){// define scan marix
     for(int i=0;i<row;i++){// 
        for(int j=0;j<col;j++){        
            scanf("%d",&mat[i][j]);// get value of each element from user
            }
        }
}
void printMat(int**mat ,int row,int col){//define print mat
    printf("Product of two matrix :\n");// print message first
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){        
            printf("%d",mat[i][j]);// print each element
            printf("\t");// after each element print tab
        }
            printf("\n");// new line after every row
    }
}
int **matrix_mul(int **mat1, int row1, int col1, int **mat2, int row2, int col2){// define matrix_mul
    int** matRes=Create_matrix(row1,col2);// create new result matrix of rows equal to matrix1 rows column equal to matrix2 column
    for(int i=0;i<row1;i++){//run for loop from i to row1 for matRes
        for(int j=0;j<col2;j++){// run for loop from i to col2 for matRes
            for(int k=0;k<row2;k++)//for loop for getting mat1 and mat2 elements in matRes k is column for matrix1 and row for column2
                matRes[i][j]+=(mat1[i][k]*mat2[k][j]);// keeping matRes ith row and jth column constant add product of mat1[i][k] and mat2[k][j]
        }
    }
return matRes; //return pointer to new matrix amtRes
}
void free_matrix(int**mat,int row){// free matrix
    for(int i=0;i<row;i++)// 
        free(mat[i]);// free each column
    free(mat);//free rows
}
