#include<stdio.h>
# define x 3
int mul(int a,int b) {
	return a*b*x;
}

int main(){
	int a,b;
	printf("enter the two no.");
	scanf("%d %d",&a,&b);
	
	printf("the product is -> %d",mul(a,b));
	
	return 0;
}
