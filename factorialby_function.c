#include <stdio.h>
#include <conio.h>
int mult(int n)
{
    int d=1;
    for (int i=1;i<=n;i++)
    {
        d=d*i;
    }
    return d;
}
int main ()
{
    int num;
    printf ("enter the value for factorial \n");
    scanf ("%d" ,&num);
    int e=mult(num);
    printf ("%d" ,e);
    return 0;
}