#include<stdio.h>
void main(){
	int row,i,j;
	printf("Enter the value of row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}
