/*
    check whether a number is even or odd using if-else statement in C language.
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int n = 0;

    printf("Enter a number to check whether it is odd or even: \n");
    scanf("%d",&n);

    if(n%2==0){
        printf("The given number is even. \n");
    }
    else {
        printf("The given number is odd. \n");
    }
}
