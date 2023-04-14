#include<stdio.h>
int main(){
	int c,a,i;
	int sum=0;
	scanf("%d",&a);
	for(i=1;i<=4;i++){
		c=a%10;
		sum+=c;
		a=a/10|0;//to not take decimal..
	}
	printf("Sum is: %d",sum);
}
