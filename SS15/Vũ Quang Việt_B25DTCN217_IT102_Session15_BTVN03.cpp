#include <stdio.h>
int reverse(int n){
	int x=0,temp;
	while(n!=0){
		temp=n%10;
		x=x*10+temp;
		n/=10;
	}
	return x;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
	int u=reverse(n);
	printf("So dao nguoc cua %d la: %d", n,u);
}	
