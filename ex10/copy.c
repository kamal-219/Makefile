#include<stdio.h>
#include<string.h>
#include"copy.h"
void copy(char a[]){
	char b[20];
	strcpy(b,a);
	printf("%s",b);
}

