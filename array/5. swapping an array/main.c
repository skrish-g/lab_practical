#include <stdio.h>
int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=0; i<8/2; i++)
    {
        int copy=arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=copy;
    }
    for(int i=0; i<8; i++)
    {
        printf("%d ", arr[i]);
    }
}
