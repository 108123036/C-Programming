/*program to perform all arthmetic programs*/
#include <stdio.h>
int main()
{
	int a,b,choice,c;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("enter 1 for additon , 2 for subraction ,3 for multiplication , 4 for division ,5 for reaminder");
	scanf("%d",&choice);
    switch(choice)
    { 
        case 1: c=a+b;
                printf("sum=%d",c);
                break;
        case 2: c=a-b;
                printf("difference=%d",c);
                break;
        case 3: c=a*b;
                printf("product=%d",c);
                break;
        case 4: c=a/b;
                printf("quotient=%d",c);
                break;
        case 5: c=a%b;
                printf("remainder=%d",c);
                break;
        default: printf("ERROR: enter number between 1 to 5!");
	}
	return 0;
}
