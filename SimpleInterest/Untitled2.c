#include<stdio.h>
int interest(int p,int r,int t)
{
    int SI;
    SI = p*t*r/100;
    return SI;
}

int main()
{
    int P,T;
    int I,R;

    printf("Enter the principle.\n");
    scanf("%d", &P);
    printf("Enter the time.\n");
    scanf("%d", &T);
    printf("Enter the rate.\n");
    scanf("%d", &R);

    I = interest(P,T,R);

    printf("The interest is %d", I);

    return 0;
}
