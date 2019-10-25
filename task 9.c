#include<stdio.h>
int main()
{
int a,i,b=1;
//taking input
printf("enter the number whose factorial you want\n");
scanf("%d",&a);
//function
for(i=1;i<=a;i++)
b=b*i;
//showing output
printf("%d",b);
return 0;
}
