#include <stdio.h>
int sumArr(int arr[], int size){
	int sum=0;
	for(int i=0;i<size;i++){
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	return sum;
}

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	int sum=sumArr(arr,n);
	printf("Tong cac phan tu trong mang la: %d",sum);
}
