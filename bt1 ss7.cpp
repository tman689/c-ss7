#include<stdio.h>

int main(){
	int arry[] = { 1, 2, 3, 4, 5 };
	int dodai = sizeof(arry) / sizeof(arry[0]);
	printf("Phan tu trong mang: \n");
	
	for(int i = 0; i < dodai; i++){
		printf("arry[%d] = %d\n", i, arry[i]);
	}
	printf("Do dai cua mang la: %d\n", dodai);
	
	return 0;
}
