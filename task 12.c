#include<stdio.h>
int main()
{
float a,b,c;
int d;
printf("enter the function you want to perform\n");
printf("1.Celcius to Fahrenheit\n2.Fahrenheit to Celcius\n3.Exit\n");
scanf("%d",&d);
switch(d)
{
case 1:
printf("enter the temperature you want to convert\n");
scanf("%f",&a);
b=(a*1.8)+32;
printf("%f",b);
break;
case 2:
printf("enter the temperature you want to convert\n");
scanf("%f",&a);
c=(a-32)/1.8;
printf("%f",c);
break;
case 3:
printf("exiting.....");
break;
}
return 0;
}
