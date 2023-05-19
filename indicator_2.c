#include<stdio.h>

main()
{
	int a[5]={34,67,87,56,24};
	int *p=&a[0];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
}
