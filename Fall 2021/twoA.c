/*
    Calculate the sum of digit entered by user
*/

#include <stdio.h>

int main(){
    int n,sum=0,i;

    printf("Enter a number to find the sum upto that number:");
    scanf("%d",&n);

    for(i=0;i<=n;i+1){
        sum+=i;
    }
    printf("%d",sum);
}
