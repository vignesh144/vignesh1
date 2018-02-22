#include <stdio.h>
void main()
 
{
 
  int x,y,i,a,total,extra;
 
  printf("Enter two numbers intervals ");
  scanf("%d %d", &x, &y);
  printf("Armstrong numbers between %d and %d are:",x,y);
  for(i=x+1; i<y; ++i)
 
  {
      a=i;
      total=0;
      while(a!=0)
 
      {
          extra=(a%10);
          total+=extra*extra*extra;
          a/=10;
          
      }
      if(i==total)
      {
          printf("%d ",i);
      }
  }
}
