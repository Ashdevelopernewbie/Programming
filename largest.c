/*
    Program to find the largest of 3 numbers
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int num1,num2,num3;
    printf("Enter three numbers to find the largest: \n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1==num2&&num1==num3){
        printf("All the numbers are same. \n");
    }
    else{
        printf("The largest number among the three numbers is: \n");
        if(num1>num2){
            if(num1>num3){
                printf("%d",num1);
            }
        }
        else if(num2>num3){
            printf("%d",num2);
        }
        if(num3>num1){
            if(num3>num2){
                printf("%d",num3);
            }
        }
    }
}
