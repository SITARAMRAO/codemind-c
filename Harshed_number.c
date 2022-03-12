#include<stdio.h>
int main()
{
    int n,I,r,sum=0;
    scanf("%d",&n);
    I=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(I%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}