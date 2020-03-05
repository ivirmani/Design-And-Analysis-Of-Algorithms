#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i=0,j=0;
int s[500];
void shift_table(char p[])
{
        int m=strlen(p);
        for(i=0;i<128;i++)
                s[i]=m;
        for(j=0;i<m-1;j++)
                s[p[j]]=m-1-j;
}
int string_match(char t[], char p[])
{
        int k;
        int m=strlen(t);
        int n=strlen(p);
        i=m-1;
        while(i<n)
        {
                k=0;
                while((k<=m-1)&&(p[i-k]==t[m-1-k]))
                        k=k+1;
                if(k==m)
                        return i-m+1;
                else
                        i=i+s[t[i]];
        }
        return -1;
}
void main()
{
 char t[100],p[100];
 int pos;
 printf("Enter the text in which pattern is to be searched:\n");
 gets(t);
 printf("Enter the pattern to be searched:\n");
 gets(p);
 shifttable(p);
 pos=string_match(t,p);
 if(pos>=0)
  printf("\n The desired pattern was found starting from position %d",pos+1);
 else
  printf("\n The pattern was not found in the given text\n");
}
