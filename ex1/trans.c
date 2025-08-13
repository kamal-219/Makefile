#include<stdio.h>
#include"func.h"
void trans(int a){
	int i,j;
	for(j=0;j<2;j++){
		for(i=0;i<2;i++){
			printf("%d",a[i][j]);
		}
		printf("\n");

	}
}
