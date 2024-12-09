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
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j;
        for ( j = i -1;j>=0 && arr[j]>key; j--)
        {
            arr[j+1] = arr[i];
        }
        arr[j+1] =key; /// j+1 vì vòng lặp trên nó j--
        
    }
    printf("\nMang da duoc sap xep:");
    for(int i=0; i<n;i++){
        printf("%3d",arr[i]);
    }
    return 0;
}