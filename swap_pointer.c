#include<stdio.h>

main()
{
	int a,b;
	a=15;
	b=45;
	
	int *p,*p1,*p2;
	p=&a;
	p1=&b;
	
	p=p2;
	p=p1;
	p1=p2;
	
	printf("%u = %d\n",p,*p);
	printf("%u = %d\n",p+1,*(p+1));
	
}
