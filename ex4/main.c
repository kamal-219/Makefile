#include<stdio.h>
#include"cal.h"
int main(){
	int a,b;
	char choice;
	printf("a= ");scanf("%d",&a);
	printf("b= ");scanf("%d",&b);
	printf("+\n-\n*\n/\n");
	printf("choice ");
	getchar();
	scanf("%c",&choice);
	switch(choice){
		case'+':printf("%d",add(a,b));break;
		case'-':printf("%d",sub(a,b));break;
		case'*':printf("%d",mul(a,b));break;
		case'/':printf("%d",div(a,b));break;
	}
	return 0;
}

