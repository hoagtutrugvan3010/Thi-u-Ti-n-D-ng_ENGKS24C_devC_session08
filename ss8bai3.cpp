#include <stdio.h>
	int main() {
    	int n;

   			printf("Nhap vao so nguyen : ");
    		scanf("%d", &n);    
    	int arr[n][n];

   
    		printf("Nhap cac phan tu cho ma tran:\n");
    	for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    	for (int i = 0; i < n; i++) {
       		for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]); 
        }
        	printf("\n"); 
    }

   		 return 0;
}	

