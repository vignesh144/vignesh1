#include<stdio.h>
#include<math.h>
void main()
{
int arn,n=0,n1,extra,result=0;
scanf("%d",&n1);
arn=n1;
while(arn!=0)
{
	arn=arn/10;
	n++;
}
arn=n1;
while(arn!=0)
{
	extra=arn%10;
	result=result+pow(extra,n);
	arn=arn/10;
}
if(result==n1)
printf("\nArmstrong number is yes");
else
printf("not an armstrong number is not");

}
