#include<stdio.h>
void main()
{
int a,b,i;
printf("enter the two num");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if((i)%2==0)
{
printf("%d\n",i);
}
}
}
