#include<stdio.h>

main()
{
	char ch[100];
	printf("enter string =");
	gets(ch);
	
	char *p1;
	p1=&ch;
	printf("%d",strlen(p1));
}
