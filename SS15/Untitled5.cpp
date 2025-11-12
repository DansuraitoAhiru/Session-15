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

int mostAppear(int arr[], int size){
	int maxCount=0;
	int mostValue=arr[0];
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	if(count>maxCount){
		maxCount=count;
		mostValue=arr[i];
	    }
	}
	printf("%d xuat hien nhieu nhat va xuat hien %d lan", mostValue,maxCount);
	return mostValue;
}

int main(){
	int arr[100];
	int n=inputArr(arr);
	mostAppear(arr,n);
}
