#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  printf("enter the alphabet");
  scanf("%c",&a);
  if(a>='A' && a<='z')
  {
      printf("it is alphabet");
}
else
{
    printf("no");
}
}
