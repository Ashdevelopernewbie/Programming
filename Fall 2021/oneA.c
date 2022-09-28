/*
    Display sum of even of first n natural numbers.
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int n,i,sum=0;

    printf("Enter a number: \n");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2){
        sum += i;
    };

    printf("The sum of first %d even numbers is %d",n,sum);

    getchar();
}
