#include<stdio.h>

main()
{
	int a[100],i,ans,n;
	int b[100];
	int *p1,*p2;
	p1 = a;
	printf("enter array size =\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	printf("a[%d]= \n",i);
    	scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
    	printf("%u = %d\n",p1+i,*(p1+i));
	}
	printf("\nall element square=\n");
	for(i=0;i<n;i++)
    {
    	ans=(a[i]*(a[i]));
    	b[i]=ans;
	}
	p2=b;
	for(i=0;i<n;i++)
    {
    	printf("%u = %d\n",p2+i,*(p2+i));
	}
    
}
