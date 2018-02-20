include<stdio.h>
int main()
{
    int n,i,not_prime=0;
    printf("enter a positiveintrger");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            not_prime=1;
        }
    }
    if(not_prime==0)
      printf("%d is a primenumber",n);
    else
      printf("%d is not a prime number",n);
      return 0;
}
