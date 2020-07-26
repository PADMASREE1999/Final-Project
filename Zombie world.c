#include<stdio.h>
int main()
{
    int b,n,count=0;
    scanf("%d%d",&b,&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //Checking if the input is valid or not
        if(a[i]>=0 && a[i]<=10000)
        {
            continue;
        }
        else
        {
            printf("Invalid input");
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {

        b=b -((a[i]%2)+(a[i]/2));
        //decreasing b value for every iteration
        count++;
        if(b<a[i])
        {
            printf("NO");
            break;
        }


    }
    if(count==n)
    {
        printf("YES");
    }
    return 0;
}
