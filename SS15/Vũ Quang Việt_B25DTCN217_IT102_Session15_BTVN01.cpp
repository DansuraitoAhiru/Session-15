#include <stdio.h>
#include <stdlib.h>
int differ(int a,int b){
	int hieu=abs(a-b);
	return hieu;
}

int multi(int a, int b){
	int tich=a*b;
	return tich;
}

int main(){
	int x,y;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	int hieu=differ(x,y);
	int tich=multi(x,y);
	printf("Su chenh lech giua %d va %d la: %d\n",x,y,hieu);
	printf("%d x %d = %d\n",x,y,tich);
}
	
