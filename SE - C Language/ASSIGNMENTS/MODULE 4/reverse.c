#include<stdio.h>
main(){
	int a,n;
	printf("Enter no. of digits of a number\n");
	scanf("%d",&n);
	printf("Enter number\n");
	scanf("%d",&a);
	int c=0,rev=0,i;
	for( i=1;i<=n;i++){
		c=a%10;
		rev=rev*10+c;
		a=a/10|0;
	}
	printf("Rverse is: %d",rev);
}
