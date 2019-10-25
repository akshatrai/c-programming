#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=12345,a,b,c,d;
    a=num1/100;
    b=((num1%100)/10);
    c=(num1/1000);
    d=1;
    printf("%d\n",num1);
    printf("%d%d\n",a,b);
    printf("%d\n",a);
    printf("%d\n",c);
    printf("%d",d);
    return 0;
}
