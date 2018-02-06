#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>=b && a>=c)
    {
        printf(" %d\n",a);
    }
    if(b>=a && b>=c)
    {
        printf(" %d\n",b);
    }
    if(c>=a && c>=b)
    {
        printf(" %d\n",c);
     }

}
