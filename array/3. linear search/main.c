#include <stdio.h>
int main()
{
    int arr[]={1, 3, -4, 7, 9, -11, 15, -18, 0}, check;
    printf("Enter the number that you want to check:\n");
    scanf("%d", &check); // --> search key, to be found
    for(int i=0; i<9; i++) // --> representing index number
    {
        if(check==arr[i])
        {
            printf("The number %d is present in array at index number %d.", check, i);
            return 0;
        }
    }
    printf("The number %d is not present in array anywhere.", check); 
}