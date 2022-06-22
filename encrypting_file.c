#include <stdio.h>
#include<string.h>

int main ()
{
    int num;
    printf("enter the file name \n");
     char file_name[30];
  gets(file_name);
  printf("enter the number of lines \n");
  scanf ("%d" ,&num);
  FILE *fp, *fp1;
 
  fp=fopen(file_name,"w");
  if(fp==NULL)
  {
      printf("No file \n");
      return 0;
  }
  char write[100];
  for (int i=0;i<num;i++)
  { fflush(stdin);
      gets(write);
      fputs(write,fp);
      fputs("\n",fp);
  }
  fclose(fp);

  fp=fopen(file_name,"r");
  fp1=fopen("encrypt_demo","w");
  char str[100];
  while(fgets(str,99,fp)!=NULL)
  { fflush(stdin);
       for(int i=0;i<strlen(str);i++)
     {
         str[i]=str[i]+5;
     }
     fputs(str,fp1);
     fputs("\n",fp1);
  }
  fclose(fp);
  fclose(fp1);
  remove(file_name);
  rename("encrypt_demo",file_name);

   return 0;
}