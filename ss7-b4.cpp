#include<stdio.h>

int main () {
	int n;
	int arr[n];
	int i;
	
	printf("Nhap so phan tu cua mang ");
	scanf("%d", &n);
	
	for(i=0; i < n; i++){
		printf("Nhap phan tu thu %d cua mang \n", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Mang vua nhap la \n");
	for(i=0; i<n; i++){
		printf("Phan tu arr[%d] = %d\n", i, arr[i]);
		
	}
}
