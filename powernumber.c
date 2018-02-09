#include <stdio.h>
void main() 
{
	int num,power,i,val=2;
	scanf("%d%d",&num,&power);
	for(i=2;i<=power;i++)
	{
	 val=val*num;
	}
	 printf("%d",val);
	return 0;
	
}
