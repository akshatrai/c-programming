#include<stdio.h>
main()
{
//here c and f are temperature in Celsius and Fahrenheit respectively
float c=0,f=0;
//taking input from user
printf("enter the temperature in Celsius:\n");
scanf("%f", &c);
//calculations
f=((c*9)/5)+32;
//showing the relevant output
printf("your temperature in Fahrenheit is %f", f);
}
