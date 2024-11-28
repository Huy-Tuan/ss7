#include<stdio.h>

int main (){
	
	int rows, cols;
	int i, j;
	
    printf("Hay nhap vao so hang ban muon ");
    scanf("%d", &rows);
    printf("Hay nhap vao so cot ban muon ");
    scanf("%d", &cols);
	
	int array[rows][cols];
	
	printf("Hay nhap gia tri cua tung phan tu \n");
	
	for(i=0; i < rows; i++){
		for(j=0; j < cols; j++){
			
			printf("Nhap phan tu tai hang %d va cot %d \n", i + 1, j + 1);
			scanf("%d", &array[i][j]);
		}
	}
	    printf("Mang 2 chieu vua nhap la: \n");
	    for (i = 0; i < rows; i++){
		    for(j = 0; j < cols; j++){
			
			printf("\t%d\t", array[i][j]);
		}
		 printf("\n");
	}  
}
