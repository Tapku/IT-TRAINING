#include<stdio.h>
#define pi 3.14
main(){
	float area,s;
	int a;
	printf("1)Triangle\n2)Square\n3)circle\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("enter value: ");
			scanf("%f",&s);
			printf("side of Trianfle: %f",s*s*s);
			break;
		case 2:
			printf("enter value: ");
			scanf("%f",&s);
			printf("side of Square: %f",4*(s));
			break;
		case 3:
			printf("enter value: ");
			scanf("%f",&s);
			printf("side of circle: %f",pi*s*s);
	}
}
