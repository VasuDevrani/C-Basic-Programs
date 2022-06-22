//c file handiling is about creating a pointer to a known file location

#include<stdio.h>
#include <string.h>
int main ()
{
    //for writing in the file
    char str[100];
   FILE *fp; //declaring a pointer to the filebuffer
   fp=fopen("C_filehandle.txt","w");
   if (fp==NULL)
   {
       printf("no file \n");
       return 0;
   }
   printf("enter a string \n");
   gets(str);
   fputs(str,fp);
   
   for (int i=0;i<strlen(str);i++)
   {
       fputc(str[i],fp); //writes single input
   }
   fclose(fp);

 
   fp=fopen("C_filehandle.txt","r");
   if (fp==NULL)
   {
       printf("no file \n");
       return 0;
   }
   char ch;
   while (!feof(fp)) //feof remaks end of file as true
   {
       ch=fgetc(fp); //extracts single data
       printf(" %c " ,ch);
   }

  /* char str1[30];
   fgets(str1,20,fp);
   printf ("%s" ,str1);*/ //annother way of reading string from file
    return 0;
}