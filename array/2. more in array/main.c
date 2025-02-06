#include <stdio.h>
int main()
{
    int sqr[]={0, 1, 4, 9};
    // size of no of bytes in a array
    printf("%d\n", sizeof(sqr));
    
    // size of array
    int arraySize = sizeof(sqr)/sizeof(sqr[0]);
    printf("%d\n", arraySize);
    
    // updating an element in an array
    int sqrs[]={0, 1, 4, 9, 16}; // update to 0, 10, 4, 9, 16
    printf("Enter a value of index 1\n");
    scanf("%d", &sqrs[1]);
    printf("%d\n", sqrs[1]); 
}