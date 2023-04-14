#include<stdio.h>
struct employee{
	int no,age;
	char name[10];
	char add[30];
};
main(){
	int i;
	struct employee e;
	for(i=1;i<=5;i++){
		scanf("%d %d",&e.no,&e.age);
		fflush(stdin);
		gets(e.name);
		gets(e.add);
	}
	for(i=1;i<=5;i++){
	
	printf("%d \n",e.no);
	printf("%d\n",e.age);
	printf("%d\n",e.name);
	printf("%d\n",e.add);
}}
