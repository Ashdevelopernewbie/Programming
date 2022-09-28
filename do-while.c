/*
    Example of do-while
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char c;
    int choice,dummy;

    do{
        printf("\n 1.Print Hello \n 2.Print Javatpoint \n 3.Exit \n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Hello \n");
            break;

        case 2:
            printf("Javatpoint \n");
            break;

        case 3:
            printf("The program will now exit. \n");
            getchar();
            exit(0);
            break;

        default:
            printf("Please enter a valid option. \n");
        }
        printf("Do you want to enter more? \n");
        scanf("%d",&dummy);
        scanf("%c",&c);
    }
    while(c=='y');
}


