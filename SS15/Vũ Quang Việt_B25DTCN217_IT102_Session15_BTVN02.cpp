#include <stdio.h>
int sum(int n){
	int x;
	int sum=0;
	while(n!=0){
		x=n%10;
		sum+=x;
		n/=10;
	}
    return sum;
}

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int tong=sum(n);
	printf("Tong cac chu so trong %d la: %d",n,tong);
}
