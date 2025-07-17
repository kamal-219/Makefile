#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"read.h"
#include"write.h"
int main(){
	char name[10],mod[10];
	char msg[20]="hello silicon";
	printf("file name= ");
	scanf("%s",name);
	printf("\nop mode= ");
	scanf("%s",mod);
	if((strcmp(mod,"r")==0)){
	  read(name);
	}
	else if((strcmp(mod,"w")==0)){
	 write(name,mod,msg);
	}
	else{
		printf("invalid");
	}
	return 0;
}

