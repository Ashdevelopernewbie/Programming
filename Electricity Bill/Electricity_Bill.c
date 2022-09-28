// 1 to 100 = Rs.10
// 100 to 200 = Rs.15
// 200 to 300 = Rs.20
// above 300 = Rs.25

#include<stdio.h>

int main(){
    int unit;
    float amt,

    printf("Enter total units consumed: ");
    scanf("%d",&unit);

    if(unit<=100){
        amt = unit * 10;
    }
    else if(unit <= 200){
        amt = unit * 15
    }
    else if(unit <= 300){
        amt = unit * 20
    }
    else{
        amt = unit * 25
    }
}
