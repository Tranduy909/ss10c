#include<stdio.h>
int main(){
    int arr[100] ;
    int searchValue;
    int n ;
    printf("nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("Nhap phan tu thu %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nNhap so nguyen muon tim kiem: ");
    scanf("%d",&searchValue);
    // int flag=-1;
    for (int i = 0; i < n; i++){
        if(searchValue==arr[i]){
            printf("phan tu ton tai o vi tri: %d\n",i);
        }
    }
    
    return 0;
}