#include<stdio.h>
int prime(int n)//given number is prime or not
{
    int i;
    if(n==0 || n==1)
    {
        return 0;
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n,i,k=0,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=2;i<n;i++)
    {
        if(prime(i))
        {
            a[k]=i;

            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];//sum of the prime numbers
        if(sum>n)
        {
            break;
        }
        if(sum==2)
        {
            continue;
        }
        else
        {
            if(prime(sum))//sum is prime or not
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
