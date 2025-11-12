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

void bubbleSort(int arr[], int size){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep tang dan la: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

int main(){
	int arr[100];
	int n=inputArr(arr);
	bubbleSort(arr,n);
}
