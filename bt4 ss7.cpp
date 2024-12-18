#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao mot so bat ky: ");
	scanf("%d", &n);
	
	int arry[n];
	printf("Cac so vao mang%d: \n");
	for(int i = 0; i < n; i++){
		printf("Nhap tung so vao mang: %d\n", i + 1);
		scanf("%d", &arry[i]);
	}
	printf("Cac so trong mang: \n");
	for(int i = 0; i < n; i++){
		printf("arry[%d] = %d\n", i , arry[i]);
	}
	return 0;
}
		
