#include <stdio.h>

void main()
{
	int n,p,rev=0,i;
	scanf("%d",&p);
	n=p;
	while(n!=0)
	{
	    
		i=n%10;
		rev=rev*10+i;
		n/=10;
	}
	
	printf("%d",rev);
	if(rev==p)
	{
	    
		printf("palindrome");
	}
	
	else
	{
	    
		printf("not a palindrome");
	}
	
	return 0;
	
}
