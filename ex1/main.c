#include<stdio.h>
#include"func.h"
int main(){
	int a[2][2]={{2,4},{5,6}};
	int b[2][2]={{10,20},{30,50}};
        addmat(a,b);
	mulmat(a,b);
	trans(a,b);
}
