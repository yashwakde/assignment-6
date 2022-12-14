#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("enter a number:\n ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0 )
          {
           f=1;
           break;
          }
          
    }
    if(f==1)
          printf("%d is not prime number",n);
   else if (f ==0)
          printf("%d is prime number",n);
    return 0;
    }