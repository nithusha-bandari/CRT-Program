#include<stdio.h>
int main()
{
long int x,sum=0,r;
scanf("%ld",&x);
a:
while(x!=0)
{
r=x%10;
sum=sum+r;
x=x/10;
}
if(sum>9)
{
x=sum;
sum=0;
goto a;}
}
printf("%ld",sum);
return 0;
}
