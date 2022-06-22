#include<stdio.h>
#include<string.h>
float res(float b){
    float Rate;
    if(b!=0)
    Rate=50+50*b;
    else
    Rate=0;
  return Rate;
}
float comm(float b){
    float Rate;
    if(b>1000)
   {Rate=100+0.45*(b-1000);}
   else 
   {Rate=0.1*b;}
  return Rate;
}
float ind(float b){
    float Rate;
    if(b>1000)
   {Rate=180+0.75*(b-1000);}
   else Rate=0.18*b;
  return Rate;
}

int main ()
{
    int id;
    float kWh;
    char name[30];
   printf("enter user name and id \n");
   gets(name);
   scanf("%d" ,&id);
   printf ("Enter user's power consumption\n");
   scanf("%f" ,&kWh);
   printf("Enter type of user commercial, residential or industrial \n");
   char type[10];
   scanf("%s" ,&type);
   float r;
   if (strcmp(type,"commercial")==0)
    r=comm(kWh);
   if (strcmp(type,"residential")==0)
    r=res(kWh);
   else if (strcmp(type,"industrial")==0)
    r=ind(kWh);
     printf("Electrical consumption of industrial user with ID %d is %f \n",id ,r);
   
    return 0;
}