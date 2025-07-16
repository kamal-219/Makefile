#include<stdio.h>
#include"add.h"
int main(){
	int a,b;
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	//add(a,b);
	printf("%d",add(a,b)); 
	return 0;
}
