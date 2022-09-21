#include<stdio.h>
main()
{
	int a,b,ans;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	ans=a;
	a=b;
	b=ans;
	printf("a:%d\n",a);
	printf("b:%d",b);
}
