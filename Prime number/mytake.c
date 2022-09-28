#include<stdio.h>
int main(){
    int i,j=0;

    printf("Enter a number.");
    scanf("%d", &i);

    j=i%2;

    if (j==0)
        printf("the number is not prime");
    else
        printf("the number is prime");

    return 0;
}
