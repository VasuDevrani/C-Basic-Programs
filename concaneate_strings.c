#include <stdio.h>

char s1[100], s2[100],s3[100];
char cnt(char e1[], char e2[])
{
int l=0;
while (e1[l]!='\0')
{
    ++l;
}
e1[l]=' ';
for (int i=0;e2[i]!='\0';++i)
{
   e1[l+1]=e2[i];
   ++l;
}

}
int main ()
{
 printf("enter the strings \n");
 gets(s1);
 gets(s2);
 gets(s3);
 cnt(s1,s2);
 cnt(s1,s3);
printf("%s",s1);
    
    return 0;
}