#include<stdio.h>
void stringlower(char *s)// converting string
{
  for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
}
int stringsort(char *str1,char *str2) //sorting the word array
{
    //str1 is lesser => 0
    //str2 is lesser => 1
    int i;
    for(i=0;str1[i]==str2[i];i++);
    if(str1[i]<str2[i])
    {
        return 0;
    }
    return 1;
}
void stringcopy(char *dest, char *src) // copying one string to another
{
    int i;
    for(i=0;src[i]!='\0';i++)
    {
        dest[i]=src[i];
    }
    dest[i]=NULL;
}
int main()           //main function
{
    int n,itr;
    scanf("%d",&n);
    for(itr=0;itr<n;itr++)  //test cases
    {
        int num[100],i=0,size;
        char ch,word[10][100];
        while(1)   // input
        {
            scanf("%s %d%c",word[i],&num[i],&ch);
            stringlower(word[i]);
            i++;
            if(ch=='\n')
               break;
        }
        size=i;
        for(int j=0;j<size;j++)    // Sorting the num array
        {
            for(int k=0;k<size-j;k++)
            {
                if(num[k]>num[k+1])
                {
                    int temp=num[k];
                    num[k]=num[k+1];
                    num[k+1]=temp;
                }
            }
        }
        for(int j=1;j<=size-1;j++)
        {
            for(int k=0;k<size-1;k++)
            {
                if(stringsort(word[k],word[k+1])==1)
                {
                    char temp[100];             //sorting the string
                    stringcopy(temp,word[k]);
                    stringcopy(word[k],word[k+1]);
                    stringcopy(word[k+1],temp);
                }
            }
        }
        for(i=0;i<size;i++)
        {
            printf("%s %d ",word[i],num[i]);
        }
    }
    return 0;
}
//
