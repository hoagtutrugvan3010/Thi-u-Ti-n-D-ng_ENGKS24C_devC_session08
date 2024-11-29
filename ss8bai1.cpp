#include<stdio.h>
		int main(){
			int arr[]={4,12,5,6,2};
			int l = sizeof(arr)/sizeof(arr[0]);
			for (int i=l-1;i>=0;i--){
				printf("%5d",arr[i]);
			}
			return 0;
	}
