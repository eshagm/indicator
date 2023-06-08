#include<stdio.h>

main()
{
	int a[100],i,n;
	int *p;
	p=&a;
	
	printf("enter ualue of N =");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
    
	printf("elements array are =\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	printf("revarse array elements =\n");
	
	int *rev;
	rev=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*rev--);
    }
}
