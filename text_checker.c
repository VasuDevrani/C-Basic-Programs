#include <stdio.h>
#include<string.h>

int main ()
{
    char str[500];
    char vowel[5]={'a','e','i','o','u'};
    int n,c=0,w;
   printf("enter the string \n");
   gets(str);
   printf("enter the input 0 or 1 \n");
   scanf ("%d",&n);
   if(n==0)
   {
      for(int i=0;i<strlen(str);i++)
      {
          for(int j=0;j<5;j++)
          {
              if(str[i]==vowel[j])
              c++;
          }
          if(c==0 && str[i]!=' ')
          {
              printf("%c ",str[i]);
              if((int)str>96)
              w+=((int)str[i]-96);
              else
              w+=((int)str[i]-64);
          }
          c=0;
      }
   }

   else if (n==1)
   {
      for(int i=0;i<strlen(str);i++)
    { if(str[i]!=' ')
        printf("%c" ,str[i]);
        if((int)str[i]>96)
       w+=((int)str[i]-96);
       else
       w+=((int)str[i]-64);
    }
   }
   printf("\n %d" ,w);

   return 0;
}