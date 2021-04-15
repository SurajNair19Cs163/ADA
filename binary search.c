#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }


   return -1;
}

int main(void)
{  printf("Enter size of array ");
   int n;scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter element %d \n",i+1);
       scanf("%d",&arr[i]);
   }
    printf("Enter element to be searched\n");
   int x; scanf("%d",&x);
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result+1);
   return 0;
}
