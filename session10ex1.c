#include<stdio.h>
int main(){
    int arr[5] ;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<n;i++){
        printf("Nhap phan tu thu %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nMang chua duoc sap xep:");
    for(int i=0; i<n;i++){
        printf("%3d",arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nMang da duoc sap xep:");
    for(int i=0; i<n;i++){
        printf("%3d",arr[i]);
    }
    return 0 ;
}