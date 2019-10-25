#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],b[100];
 //taking input
  printf("Enter a string to check if it is a palindrome\n");
  scanf("%s",&a);
 //performing functions
  strcpy(b,a);
  strrev(b);
 //showing output
  if (strcmp(a,b)==0)
    printf("The string is a palindrome.\n");
  else
    printf("The string is not a palindrome.\n");
   return 0;
}
