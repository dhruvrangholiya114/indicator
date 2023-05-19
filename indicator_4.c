#include<stdio.h>

main()
{
	char str[100];
	char *len;
	printf("Enter String :- ");
	gets(str);
	
	len = &str;
	
	printf("String Length is %d",strlen(len));
}
