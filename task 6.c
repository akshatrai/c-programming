#include <stdio.h>
#include <math.h>
main()
{
    //here a is the number we wish to enter while c are the number of digits in it
int a,b,c,e=0,d,temp;
//taking input from user
printf("enter the number of digits your number contains:\n");
scanf("%d",&c);
printf("enter your number you want to check for:\n");
scanf("%d",&a);
temp=a;
//conditions
while(temp!=0)
{
    b=temp%10;
    e=e+pow(b,c);
    temp=temp/10;
}
if(a==e)
    //showing output
    {printf("the number is an armstrong\n");}
    else
        printf ("The given number is not a armstrong no");
return 0;
}
