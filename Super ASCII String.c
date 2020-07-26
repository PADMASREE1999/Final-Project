#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)   //test cases
    {
       char s[400];
       int ascii,i,count[27]={0};
       scanf("%s",s);
       for(i=0;s[i]!='\0';i++) // new ascii value
       {
          ascii=s[i]-96;
          count[ascii]++;
          if(count[ascii]>ascii) /* If the count exceeds the required value
                              then "No" is printed and the loop is exited */
           {
              printf("No");
              break;
           }
       }
       if(s[i]==NULL) //if loop is not exited due to break
       {
           for(i=1;i<=26;i++)
           {
              if(count[i]!=0 && count[i]!=i)
              {
                printf("No");
                break;
              }
           }
          if(i>26)
          {
             printf("Yes");
          }
       }
       t--;
    }
       return 0;
}
