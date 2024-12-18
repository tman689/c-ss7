#include<stdio.h>

int main(){
	int arry[5];
	printf("Nhap vao 5 so nguyen to: \n");
	scanf("%d",&arry[5]);
	for(int i = 0; i < 5; i++){
		printf("Cac so nguyen ban nhap %d: \n", i + 1);
	}
	printf("\nCac so trong mang: \n");
	for(int i = 0; i < 5; i++){
		printf("arry[%d] = %d\n", i, arry[i]);
	}
	return 0;
}
		
