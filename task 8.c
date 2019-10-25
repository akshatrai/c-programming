#include<stdio.h>
int main()
{
int a,i=0;
//taking the input
printf("enter the number whose table you want\n");
scanf("%d",&a);
//making the table and showing output
for(i=1;i<11;i++)
{
printf("%d * %d=",a,i);
printf("%d\n",a*i);
}
return 0;
}
