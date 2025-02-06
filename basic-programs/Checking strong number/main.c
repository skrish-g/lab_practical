#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ncopy=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        n/=10;
        int fact=1;
        for(int i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(ncopy==sum)
        printf("Yes");
    else
        printf("No");
}