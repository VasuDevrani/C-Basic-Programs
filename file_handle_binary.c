#include<stdio.h>
#include<string.h>
int main ()
{
    int num;
    char name[30];
scanf("%d",&num);
fflush(stdin);
gets(name);

    /*FILE *fp;
    fp=fopen("binary_handle.txt","wb"); //here mode needs to be binary that is 'b'
    printf("enter the roll no. and name ");
   
   scanf ("%d", num);
    fflush(stdin);
  gets(name);  // gets function needs empty buffer, otherwise it take \n as input;
   
   fwrite(&num,sizeof(int),1,fp);
   fwrite(&name,sizeof(name),2,fp);*/

    return 0;
}