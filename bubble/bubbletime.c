#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}




void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)


       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}



void main()
{
    int a[15500],n;
    clock_t start,end;
    n=0;
    while(n<=15500)
    {
        for(int i=0;i<n;i++)
            a[i]=n-i;

        start=clock();
        bubbleSort(a,n);

        //delay
        for(int j=0;j<=100;j++);

        end=clock();

        printf("Time for N = %d elements is = %f secs \n",n,((double)(end-start))/CLOCKS_PER_SEC);
        n=n+1000;
    }

}
