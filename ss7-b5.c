#include<stdio.h>

int main () {
	
	int i, arr[5] = {1, 6, 3, 8, 5};
	int max = arr[0];
	int min = arr[0];
	for(i=0;i<5;i++){
		printf("arr[%d] = %d \n", i, arr[i]);
		
		if(max < arr[i]){
			max = arr[i];
		}else if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("Max cua mang la %d\n", max);
	printf("Min cua mang la %d\n", min);
}
