#include <stdio.h>
int fab(int n)
{
    if(n<=1)
    return 1;
    else
    return (fab(n-1)+fab(n-2));
}
int main ()
{
    int a,n;
    printf("enter your value=");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        printf("%d \n" ,fab(a));
    }
    return 0;
}