#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,d,x1,x2;
	
	printf("Please input three float numbers:");
	scanf("%f%f%f",&a,%b,&c);
	d=b*b-4*a*c;
	if(0==a)
	{
		printf("The equation is not quadratic.");
	}
	else	
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	if(0==d)
	{
		printf("The equation has two equal roots:%.4f",x1);
	}
	else if(d>0)
	{
		printf("The equation has two distinct roots:%.4f and %.4f",x1,x2);
	}
	else
	{
		printf("The equation has two complex roots:%.4f and %.4f",x1,x2);
	}
	return 0;
}
