#include <stdio.h>
int main()
{
    // initialising an array
    int a[]={51, 52, 53, 54, 55, 56, 57};
    
    for(int i=0; i<=6; i++)
    {
        printf("%d\n", a[i]);
    }
    
    // checking size of array
    printf("%d\n", sizeof(a));
    
    // checking size of different data types
    double b;
    float c;
    char d;
    int e; 
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(e));
    
    // update an array
    a[0]=121;
    a[1]=151;
    a[2]=171;
    a[3]=201;
    
    for(int i=0; i<=3; i++)
    {
        printf("%d\n", a[i]);
    }
}