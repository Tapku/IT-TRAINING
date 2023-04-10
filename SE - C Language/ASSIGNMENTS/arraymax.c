#include<stdio.h>
main(){
	int arr[10],i,j;
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<3;i++){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("ma ele is ::%d",arr[0]);
}
