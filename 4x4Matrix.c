/*
    Program to show 4 X 4 matrix.
*/

#include <stdio.h>
#include <

int main(){
    int matrix[4][4],i=0,j=0;

    printf("Enter the elements of the matrix. \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The 4 X 4 matrix is: %d",matrix[i][j]);
    for(i=0;i<2;i++){
            printf("col ");
        for(j=0;j<2;j++){
            printf("row ");
        }
    }

}
