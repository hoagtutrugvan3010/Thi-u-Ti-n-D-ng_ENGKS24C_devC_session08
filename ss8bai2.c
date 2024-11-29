#include<stdio.h>
		int main(){
			//tao mang va gan gia tri 1 bien x ,
			int arr[]={2,4,56,7,8};
			int l=sizeof(arr)/sizeof(arr[0]);
			int x,y=0;
			//dung printf va scanf nhap 1 gia tri 
			printf("nhap 1 gia tri bat ki: ");
			scanf("%d",&x);
			//ktra gia tri bang for (int i=0;i<5;i++){if (x=arr[i]){printf
			for (int i=0;i<l;i++){
				if (arr[i]==x){
					printf("vi tri phan tu trong mang la:%d\n",i+1);
					y=1;
					break;
				}
				
			}	if (y==0){printf("phan tu k ton tai\n");}
			
			return 0;
	}
