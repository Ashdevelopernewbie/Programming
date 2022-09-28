/*
    Print product table for the given number using for loop.
*/

#include<stdio.h>

int main(){
    int n =0,i=1;

    printf("Enter a number to see its product table. \n");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d \n",n*i);
    }

    return 0;
}
