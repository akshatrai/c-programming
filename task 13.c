#include<stdio.h>
int main()
{
	int a[50],i,n,large,small;
	//taking array as input
	printf("How many elements:\n");
	scanf("%d",&n);
	printf("Enter the Array:\n");
 	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
    //performing the function
	large=small=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>large)
			large=a[i];
		if(a[i]<small)
			small=a[i];
	}
	//showing the output
	printf("The largest element is %d",large);
	printf("\nThe smallest element is %d",small);
	return 0;
}
