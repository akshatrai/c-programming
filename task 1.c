#include<stdio.h>
main()
{
int a=0,b=0;
//here a and b are age and phone number respectively
char name[1024];
//taking input from the user
printf("Enter your name:\n");
scanf("%s", &name);
printf("enter your age:\n");
scanf("%d", &a);
printf("enter your phone number:\n");
scanf("%d", &b);
//showing the relevant output
printf("so according to you\n\nyour name is %s \nyour age is %d \nyour phone number is %d \n", name,a,b);
}
