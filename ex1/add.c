#include<stdio.h>
#include"func.h"
void addmat(int a,int b){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			a[i][j]=a[i][j]+b[i][j];
			printf("%d",a[i][j]);
		}
		printf("\n");

	}
}














