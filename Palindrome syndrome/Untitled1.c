
#include<stdio.h>

int main()
{
    int num, a, sum = 0, temp;
    printf("Enter your number");
    scanf("%d", &num);
    temp = num;

    while(num>0){
        a = num % 10;
        sum = (sum*10)+a;
        num = num/10;
    }

    if (temp == sum){
        printf("The number is palindrome.");
    }
    else {
        printf("The number is not palindrome.");
    }

    return 0;
}
