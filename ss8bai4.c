#include <stdio.h>

int main() {
    int arr[2][3]={{30,10,2},{20,2,6}};
    int max;
    for (int i=0;i<2;i++){
    	for (int j=0;j<3;j++){
    		if (arr[i][j]>max){
    			max = arr[i][j];
			}
		}
	}
	printf("phan tu lon nhat la :%d",max);

    return 0;
}

