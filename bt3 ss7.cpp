#include<stdio.h>

int main(){
	int arry[5] = {2, 3, 4, 5, 6};
	int sochan = 0;
	printf("Cac so chan trong mang: \n");
	for(int i = 0; i < 5; i++){
		if(arry[i] % 2 == 0){
			printf("arry[%d] = %d\n", i, arry[i]);
			sochan = 1;
		}
	}
	if(sochan){
		printf("mang khong chua so chan: \n");
	}
	return 0;
}	
