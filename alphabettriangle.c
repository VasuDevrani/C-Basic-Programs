#include <stdio.h>


int main ()
{
    int r,i,j;
    printf ("enter the number of rows \n");
    scanf("%d" ,&r);
   for (i=1;i<=r;i++)
     {
         for (j=1;j<=r-i;j++)
         printf(" ");
         for(char al='A';al<='A'+i-1;al++)
         printf("%c",al);
         for(int k=i-1;k>=1;k--)
         { char al='A'+k-1;
         printf("%c" ,al);}
         printf("\n");
     }

    return 0;
}