#include <stdio.h>
#include <limits.h>
int main()
{   
    int max =INT_MIN;
    int arr[]={-23, -3, -4, -7, -9, -11, 0, -18, -123}, index_no;
    for(int i=0; i<9; i++) // --> representing index number
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index_no=i;
        }
    }
    printf("The maximum number in the array is %d, which is present at index number %d.", max, index_no);
    
    // if array is empty, print the message
    // end the program 
    
    int a[]={};
    if(sizeof(a)==0)
    {
        printf("\nArray is empty");
        return 0;
    }
}