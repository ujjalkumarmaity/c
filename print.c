/*
\   -   escape the next character
"   -   start or end of string
’   -   start or end a character constant
%   -   start a format specification
\\  -   print a backslash
\"  -   print a double quote
\’  -   print a single quote
%%  -   print a percent sign*/

#include<stdio.h>
#define p "hello world"
int main()
{
	printf("hello world\n");
	printf("\"hello world\"\n");
	printf("\'hello world\'\n");
	printf("hello w\\orld\n");
	printf("%s",p);
	return 0;
}
