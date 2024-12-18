#include<stdio.h>

int main(){
	int arry[5] = { 5, 15, 20, 25, 30};	
	int max = arry[0];
	int min = arry[0];
	for(int i = 0; i < 5; i++){
		if (arry[i] > max){
			max = arry[i];
		}
		if (arry[i] < min){
			min = arry[i];
		}
    }
    printf("So nho nhat trong mang la: %d\n", min);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}


