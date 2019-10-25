#include<stdio.h>
main()
{
//here a,b and c are marks in three different subjects
int a=0,b=0,c=0,sum=0;
float avg;
//taking input from the user
printf("enter your marks in the three subjects:\n");
scanf("%d %d %d", &a,&b,&c);
//calculations
sum=(a+b+c);
avg=sum/3;
//showing output
printf("the sum of your marks is %d\nthe average of your marks is %f", sum, avg);
}
