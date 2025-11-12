#include <stdio.h>
int deleteEle(int arr[], int size,int index){
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	return size-1;
}

int removeDuplicates(int arr[], int size){
	int newSize=size;
	for(int i=0;i<newSize;i++){
		for(int j=i+1;j<newSize;j++){
			if(arr[i]==arr[j]){
				newSize=deleteEle(arr,newSize,j);
				j--;
			}
		}
	}
	return newSize;
}

int main(){
	int arr[]={1,2,2,3,4,5,6,6,9,7,5,9,7};
	int size=sizeof(arr)/sizeof(int);
	int newSize= removeDuplicates(arr,size);
	printf("Mang sau khi xoa: ");
	for(int i=0;i<newSize;i++){
		printf("%d ", arr[i]);
	}
}
