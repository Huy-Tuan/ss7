#include<stdio.h>

int main(){
	int arr[5]= {1,2,3,4,5};
	int i;
	for(i = 0; i < 5; i++){
		printf("Mang arr[%d] = %d\n",i, arr[i]);
	}
		printf("Gia tri cua mang sau khi sua la \n");
	
	for( i = 0; i < 5; i++){
		
		if(arr[i] % 2 == 0){
			arr[i] += 3;
			printf("Mang arr[%d] = %d\n",i, arr[i]);
		}else if(arr[i] % 2 != 0){
			arr[i] += 2;
			printf("Mang arr[%d] = %d\n", i, arr[i]);
		}
	}
}
