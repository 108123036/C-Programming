#include <stdio.h>
int main()
{
	int a,t,hra,da,ta;
	printf(" enter basic salary");
	scanf("%d",&a);
	da=0.44*a;
	hra=0.16*a;
	ta=0.08*a;
	t=a+da+hra+ta;
	printf(" total salary=%d",t);
}




