#include<stdio.h>
#include<stdlib.h>
void merging(int arr[],int l,int m,int h)
{
        int p=m-l+1;
        int q=h-m;
        int t1[p],t2[q];
        int i=0,j=0,k=0;
        for(i=0;i<p;i++)
                t1[i]=arr[i+l];
        for(j=0;j<q;j++)
                t2[j]=arr[j+m+1];
        i=0;j=0,k=l;
        while(i<p && j<q)
        {       
                if(t1[i]<=t2[j])
                {
                        arr[k]=t1[i];i++;
                }
                else 
                {
                        arr[k]=t2[j];j++;
                }
                k++;
        }
        while(i<p)
        {
                arr[k]=t1[i];i++;k++;
        }
        while(j<q)
        {
                arr[k]=t2[j];k++;j++;
        }
}
void mergesort(int arr[],int l,int h)
{
        if(l<h)
        {
                int mid=l+(h-l)/2;
                mergesort(arr,l,mid);
                mergesort(arr,mid+1,h);
                merging(arr,l,mid,h);
        }
}
void printarray(int arr[],int n)
{
        int i=0;
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
        printf("\n");
}
void main()
{
        int m,i=0;
        printf("Enter The Size Of The Array");
        scanf("%d",&m);
        int arr[m];
        printf("Enter The Elements");
        for(i=0;i<m;i++)
                scanf("%d",&arr[i]);
        int n= sizeof(arr)/sizeof(arr[0]);
        printf("array before sort\n");
        printarray(arr,n);
        mergesort(arr,0,n-1);
        printf("array after sort\n");
        printarray(arr,n);
}
