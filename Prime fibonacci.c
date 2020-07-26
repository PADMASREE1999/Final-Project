#include<stdio.h>
#include<math.h>
int isprime(int n)//given number is prime or not
{
   int i;
   if(n==0 || n==1)
   {
       return 0;
   }
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           return 0;
       }
   }
   return 1;
}
//since the fibonacci list can be very long
//we use unsigned long long int
unsigned long long int fibonacci(unsigned long long int n1,unsigned long long int n2,int count)
{
    unsigned long long int fib;
    int i;
    for(i=3;i<=count;i++)
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
    }
    return fib;
}
int main()
{
    int n1,n2,num,prime[100],i,count1=0;
    int unique[8]={0},uindex;
    int count2=0,max=0,min=10000;
    scanf("%d %d",&n1,&n2);
    //generating all prime numbers in the range
    for(num=n1;num<=n2;num++)
    {
        if(isprime(num)==1)
        {
            prime[count1]=num;
            count1++;
        }
    }
    // combining the numbers to form new values
    for(i=0;i<count1;i++)
    {
        int number;
        for(int j=0;j<count1;j++)
        {
            if(i==j)
                continue;
            if(prime[j]<10)
            {
                number=prime[i]*10+prime[j];
            }
            else
                number=prime[i]*100+prime[j];

            //picking unique combinations
            switch(number)
            {
               case 237:
                  uindex=0;
                  break;
               case 313:
                  uindex=1;
                  break;
               case 317:
                  uindex=2;
                  break;
               case 373:
                  uindex=3;
                  break;
               case 537:
                  uindex=4;
                  break;
               case 717:
                  uindex=5;
                  break;
               case 737:
                  uindex=6;
                  break;
               case 797:
                  uindex=7;
                  break;
              default:uindex=-1;
         }
         if(uindex!=-1)
             unique[uindex]++;
         if(uindex!=-1 && unique[uindex]>1)//duplicate element
              continue;
         if(isprime(number)==1)
         {
             count2++;
             max=(number>max)?number:max;
             min=(number<min)?number:min;
         }

      }
    }
    printf("%llu",fibonacci(min,max,count2));
    return 0;
}
