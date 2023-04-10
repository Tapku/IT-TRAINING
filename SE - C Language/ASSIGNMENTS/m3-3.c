//Write a program user enter the 5 subjects mark. You have to make a total and find the percentage.
#include<stdio.h>
main(){
	float a,b,c,d,e,total,per;
	printf("ENter marks of 5 subjects");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	per=(total/500)*100;
		printf("%f\n",per);
	if(per>75)
		printf("Distinction");
	else if(per>60 && per<=75)
		printf("First class");
	else if(per>50 && per<=60)
		printf("Second class");
	else if(per>35 && per<=50)
		printf("Pass class");
	else
		printf("FAIL");
}
