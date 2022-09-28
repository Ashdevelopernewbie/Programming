/*
    Sum of two matrix
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int row,col,i,j,first[10][10],second[10][10],result[10][10];
    printf("Enter the row size of matrix: ");
    scanf("%d",&row);
    printf("Enter the coloumn size of matrix: ");
    scanf("%d",&col);

    printf("Enter the elements of first matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&first[i][j]);
        }
    }

    printf("Enter the elements of second matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&second[i][j]);
        }
    }

    //sum of two matrix
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            result[i][j]=first[i][j]+second[i][j];
        }
    }


    printf("The sum of two matrix is: \n");
    for(i=0;i<row;i++){
        for(j=0;j<row;j++){
            printf("%d",result[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

