//Write a Program to check the given number is prime or not prime.
#include<stdio.h>
main(){
	int x,a,j=0,i;
	printf("Enter number: ");
	scanf("%d",&x);
	
		for(i=1;i<=x;i++)
	{
		if(x%i==0)
			j++;
	}
	if(j>2)
		printf("the no.%2d is not a prime",x);
	else 
		printf("the no.%2d is a prime",x);
}
