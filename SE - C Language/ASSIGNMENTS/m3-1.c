//Write a Program to check the given year is leap year or not.
#include<stdio.h>
main(){
	int year;
	printf("enter year: ");
	scanf("%i",&year);
	if(year>1000 && year<9999)
		if (year%4==0)
		printf("%i -- Is Leap year",year);
		else
		printf("%i -- Isn't Leap year",year);
	else
		printf("Something wrong");
}

