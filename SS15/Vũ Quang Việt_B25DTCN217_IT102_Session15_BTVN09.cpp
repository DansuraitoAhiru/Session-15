#include <stdio.h>
int inputArr(int arr[]){
	int size;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &size);
	for(int i=0;i<size;i++){
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	return size;
}

int leastAppear(int arr[], int size){
	int minCount=size;
	int leastValue=arr[0];
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	if(count<minCount){
		minCount=count;
		leastValue=arr[i];
		}
	}
	printf("%d xuat hien it nhat, so lan xuat hien: %d", leastValue,minCount);
	return leastValue;
}

int main(){
	int arr[100];
	int n=inputArr(arr);
	leastAppear(arr,n);
}
