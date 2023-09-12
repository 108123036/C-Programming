/* to swap two variables*/
#include <stdio.h>
int main()
{
	int x,y,z;
	printf("enter 2 numbers ");
	scanf("%d %d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("x=%d and y=%d",x,y);
	return 0;
}
