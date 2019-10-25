#include<stdio.h>
float add(x,y);
float sub(x,y);
float multi(x,y);
float div(x,y);
int main()
{
int a,b,c;
printf("please enter the input of your choice\n");
printf("1. addition\n2.subtraction\n3.multiplication\n4.division\n");
scanf("%d",&a);
printf("enter the two numbers\n");
scanf("%d %d",&b,&c);
switch (a)
{
case 1:
printf("%f", add(c,b));
break;
case 2:
printf("%f", sub(c,b));
break;
case 3:
printf("%f", multi(c,b));
break;
case 4:
printf("%f", div(c,b));
break;
}
}
float add(x,y)
{
    return x+y;
}
float sub(x,y)
{
    return x-y;
}
float multi(x,y)
{
    return x*y;
}
float div(x,y)
{
    return x/y;
}
