#include<stdio.h>
int main(){
    int P,T,R,interest;
    printf("Enter the principle. \n");
    scanf("%d", &P);
    printf("Enter the time. \n");
    scanf("%d", &T);
    printf("Enter the rate. \n");
    scanf("%d", &R);
    interest = SI(P,T,R);

    printf("The interest is %d", &interest);
}

int SI(int x,int y,int z){
    int interest;
    interest = x*y*z/100;
    return interest;
}
