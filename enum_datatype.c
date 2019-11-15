/*Enumeration is a user defined datatype.
It is used to assign names to the integral constants which makes a program easy to read and maintain*/
// enum enum_name {const1 ,const2,.....,constn}
#include<stdio.h>
int main()
enum day{sun,mon=3,tue=10,wed,thur=4,fri,sat };
{
	int i;
	printf("%d %d  %d  %d  %d  %d %d\n",sun,mon,tue,wed,thur,fri,sat); //0 3  10  11  4  5 6
	for(i=sun;i<=sat;i++)
		printf("%d\n",i); //0 1 2 3 4 5 6 
	return 0;
}
