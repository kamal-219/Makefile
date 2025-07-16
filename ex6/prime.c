#include<stdio.h>
#include"prime.h"
void prime(int n){
	int i;
	for(i=2;i<n;i++){
		if((n%i)==0){
			printf("prime");break;
		}
		else{
			printf("not prime");
		}
	}
}

