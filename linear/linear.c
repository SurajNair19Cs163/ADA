#include <stdio.h>
int Search(int arr[], int l, int r, int x)
{
     if (r < l)
        return -1;
     if (arr[l] == x)
        return l;
     if (arr[r] == x)
        return r;
     return Search(arr, l+1, r-1, x);
}

int main()
{
    printf("Enter size of array ");
   int n;scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter element %d \n",i+1);
       scanf("%d",&arr[i]);
   }
    printf("Enter element to be searched\n");
   int x; scanf("%d",&x);
    int index = Search(arr, 0, n-1, x);
    if (index != -1)
       printf("Element %d is present at index %d", x, index+1);
    else
        printf("Element %d is not present", x);
    return 0;
}
