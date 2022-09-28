/*
    Recursion is used to calculate the factorial of a number.
*/
#include <stdio.h>

int fact(int);
int main(){
    int n, f;
    printf("The number whose factorial you want to calculate:");
    scanf("%d",&n);
    f = fact(n);
    printf("factorial = %d",f);

}

int fact(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

}
