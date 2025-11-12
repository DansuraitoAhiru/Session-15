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

int bubbleSort(int arr[], int size){
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
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int binarySearch(int arr[], int size){
	int searchValue;
	printf("Nhap so can tim: ");
	scanf("%d", &searchValue);
	int found=0;
	int left,right,mid;
	left=0;
	right=size-1;
	while(left<=right){
		mid=left+(right-left)/2;
		if(arr[mid]==searchValue){
			found=1;
			break;
		} else if(arr[mid]<searchValue){
			left=mid+1;
		} else{
			right=mid-1;
		}
	}
	if(found){
		    printf("Phan tu chi so %d co gia tri bang %d", mid,searchValue);
		} else {
			printf("Ko tim thay phan tu co gia tri bang %d", searchValue);
		}
}

int main(){
	int arr[100];
	int n=inputArr(arr);
	bubbleSort(arr,n);
	binarySearch(arr,n);
}  
