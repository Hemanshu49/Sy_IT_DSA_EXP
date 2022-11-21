#include <stdio.h>
#include <stdlib.h>

int smallest(int arr[], int k ,int n);
void selection_sort(int arr[], int n);

void main(int argc , char *argv[])
{
    int arr[10], i , n;
    printf ("enter the no. of element");
    scanf("%d",&n);
    printf ("enter the element of the array");

    for(i=0;i <n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf(" sorrted array is");
    for (i=0 ; i<n ;i++)
    {
        printf ("%d\t",arr[i]);
    }
}

int smallest (int arr[] , int k ,int n)
{
    int pos=0 ,small=arr[k],i;
    for(i=k+1 ; i < n; i++);
    {
        if(arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
    }
        return pos;
 }
  void selection_sort(int arr[], int n)
  {
    int k , pos , temp;
    for (k = 0 ; k <n ; k ++)
    {
        pos= smallest (arr ,k ,n);
        temp = arr[k];
        arr[k]=arr[pos];
        arr[pos]=temp;
    }
  }
