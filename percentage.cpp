/* program to calculate the percentage of students*/
#include<stdio.h>
int main()
{
	float a,b,c,d,e,p;
	printf("enter subjectb marks");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	printf("percentage =%f",p);
	return 0;
}
