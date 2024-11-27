#include <stdio.h>

int main () {
	int n;
	int arr[n];
	int i;
	
	printf("Nhap so phan tu cua mang ");
	scanf("%d", &n);
	
	for (i=0; i < n; i++){
		
		printf("Gia tri arr[%d] = ", i);
		scanf("%d", &arr[i]);
		
		if(arr[i] % 2 != 0){
		printf("arr[%d] = %d\n", i, arr[i]);
		}
	    else if(arr[i]%2==0){
	  	printf("Hay nhap lai ");
	  	scanf("%d", &arr[i]);
	  	printf("arr[%d] = %d \n",i, arr[i]);
	   }
	  }
	}
