#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number:\n ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        printf("%d\n",i);
        sum=i+sum;
    }
          printf("%d",sum);
    }
