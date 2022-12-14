#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter a number:\n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
        sum=i*i+sum;
    }
          printf("%d",sum);
    }
