//if else
//find maximum between three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		if(a>c)
			printf("max = %d",a);
		else
		{
			if(b>c)
				printf("max = %d",b);
			else
				printf("max = %d",c);
		}
	else
		{
			if(b<c)
				printf("max = %d",c);
			else
				printf("max = %d",b);
		}
		
	return 0;
}
