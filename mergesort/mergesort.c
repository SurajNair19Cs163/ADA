#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void split(int[],int,int);
void combine(int[],int,int,int);
void main()
{
    int a[15000],n,j,i,ch,temp;
    clock_t start,end;
    while(1)
    {
        printf("\n 1: Enter n and values to sort");
        printf("\n 2: time for sorting between 0 and 15000");
        printf("\n 3: Exit");
        printf("\n 4: Enter choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter the number of elements: ");

scanf("%d",&n);
printf("\nEnter array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
start=clock();
split(a,0,n-1);for(i=0;i<=10000000;i++);
end=clock();
printf("\nSorted array is: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));

break;

case 2:n=0;
       while(n<=15000)
       {for(i=0;i<=10000;i++);
           for(i=0;i<n;i++)
           {
               a[i]=n*i;
           }
           start=clock();
           split(a,0,n-1);

            end=clock();
           printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
           n=n+1000;
       }break;
case 3:exit(0);break;
default: printf("invalid");
        }

    }}

void split(int a[],int low,int high)
{
int mid,o;for(o=0;o<=10000;o++);
if(low<high)
{
mid=(low+high)/2;
split(a,low,mid);
split(a,mid+1,high);
combine(a,low,mid,high);
}}

void combine(int a[],int low,int mid,int high)
{
int c[15000],i,j,k,o;
i=k=low;
j=mid+1;
while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{c[k]=a[i];
++k;
++i;
}
else
{c[k]=a[j];
++k;
++j;
}
}

if(i>mid)
{while(j<=high)
{c[k]=a[j];
++k;
++j;
}
}
if(j>high)
{while(i<=mid)
{c[k]=a[i];
++k;
++i;
}
}
for(i=low;i<=high;i++)
{a[i]=c[i];
}
}
