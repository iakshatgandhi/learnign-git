#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d %d %d",&a ,&b ,&c);
	if(a>=b&&a>=c)
	printf("the greater number is : %d",a);
	else if(b>=a&&b>=c)
	printf("the greater number is : %d",b);
	else
	printf("the greater number is : %d",c);
	return 0;
}
