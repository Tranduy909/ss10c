#include<stdio.h>
int main(){
    int arr[]={23,99,7,-4,14};
    int size=5;
    printf("mang chua duoc sap xep: ");
    for(int i=0; i<5;i++){
        printf("%3d",arr[i]);
    }
    for(int i=0;i<size;i++){
        int min =arr[i];
        for (int j = 0; j < size; j++){
            if(arr[i]<arr[j]){
                min =arr[j];
                arr[j]=arr[i];
                arr[i]=min;
            }
        }
        
    }
    printf("\nmang da duoc sap xep: ");
    for(int i=0; i<5;i++){
        printf("%3d",arr[i]);
    }
    return 0;
}