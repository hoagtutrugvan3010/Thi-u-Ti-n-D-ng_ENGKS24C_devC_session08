#include <stdio.h>

int main() {
    
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int rows = 4; 
    int cols = 4; 

    int sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += arr[0][j];        
        sum += arr[rows - 1][j];  
    }

    for (int i = 1; i < rows - 1; i++) {
        sum += arr[i][0];         
        sum += arr[i][cols - 1];  
    }

    printf("Ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

