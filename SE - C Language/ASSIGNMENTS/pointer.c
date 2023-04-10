#include<stdio.h>
main(){
	int a=1,b=2,sum;
	int *p,*u;
	p=&a;
	u=&b;
	sum=*p + *u;
	printf("%d",sum);
}

