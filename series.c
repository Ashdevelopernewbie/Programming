#include <stdio.h>

int main()
{

int end, sum=1, fib=0;

printf("Number of terms:"); scanf("%d",&end);

for(int i=1;i<=end/2;i++)
{

sum=sum+fib;
printf("%d-",fib);

fib=fib+sum;
printf("%d-",sum);

}

return 0;
}
