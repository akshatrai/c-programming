#include<stdio.h>
int main()
{
//here a is our number and b our reverse number
int a=0,b=0;
//taking the input from user
printf("Enter the number you want to reverse:\n");
scanf("%d", &a);
//reversing the number
while(a!=0)
{
b=(b*10+a%10);
a/=10;
}
// showing relevant output
printf("Your number in reverse is %d",b);
return 0;
}

