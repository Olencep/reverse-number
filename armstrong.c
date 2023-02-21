#include<stdio.h>
 int main()
{
int n,r,sum=0,temp;
printf("Enter the number\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("Number is armstrong.");
else
printf("Not armstrong.");
return 0;
}
