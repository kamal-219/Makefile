#include<stdio.h>
#include"fact.h"
void fact(int n){
	int i, f=1;
	if(n<0){
                printf("0");
        }
        else{
        for(i=1;i<=n;i++){
            f*=i;
        }
        printf("output= %d ",f);
        }
}
