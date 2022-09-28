#include<stdio.h>
int main(){
    int p, t, r, interest;

    printf("Enter Principle, Time and Interest.\n ");
    scanf("%d %d %d", &p, &t, &r);

    interest=simpleInterest(p,t,r);
    printf("Simple interest = %d", interest);

    return 0;
}

int simpleInterest(int a, int b, int c){
    int si;
    si = a + b + c / 100;
    return si;
}
