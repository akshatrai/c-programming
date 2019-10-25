#include<stdio.h>
#include<string.h>
main()
{
//defining variables
char fname[1024], sname[1024], fullname[1024];
//taking input
printf("enter your first name:\n");
scanf("%s", &fname);
printf("enter your surname:\n");
scanf("%s", &sname);
//combining the name
   strcat(fname,sname);
//showing relevant output
printf("according to you your full name is %s", fname);
}
