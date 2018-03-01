#include<stdio.h>
void main()
{
  int a,b,c,i,j;
  printf("enter the number");
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;i++)
  {
    int c=0;
    for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
          c++;
          break;
        }
      }
  if(c==0)
  {
    printf("%d\t",i);
  }
  }
  }
