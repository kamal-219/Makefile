#include<stdio.h>
#include<math.h>
#include"square.h"
#include"power.h"
void square(int a);
void power(int a,int b);
int main(){
	int a,b;
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	square(a);
	power(a,b);
	return 0;
}

