/*
    Program to check whether a person is eligible to vote or not.
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int age;

    printf("Program to check whether a person is eligible to vote or not. \n");
    printf("Enter your age: \n");
    scanf("%d",&age);

    if(age>=21,age<100){
        printf("You are eligible for voting.\n");
    }
    else if(age>=100){
        printf("You are a CENTENARIAN and eligible for voting OR you are shithole.\n");
    }
    else if(age<21){
        printf("You are not eligible for voting.\n");
    }
}
