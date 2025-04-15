#include<stdio.h>

// Hàm cộng các phần tử tương ứng của 2 mảng và trả về tổng
int addArray(int a[], int b[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i] + b[i];
    }
    return sum;
}

int main(){
    int a[5], b[5];

    printf("Nhap cac phan tu cua mang A:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", a + i );
    }

    printf("In cac phan tu cua mang A: { ");
    for(int i = 0; i < 5; i++){
        if(i == 4){
            printf("%d", *(a + i));
        }else{
            printf("%d, ", *(a + i)); 
        } 
    }
    printf("}\n");

    printf("Nhap cac phan tu cua mang B:\n");   
    for(int i = 0; i < 5; i++){
        scanf("%d", b + i );
    }

    printf("In cac phan tu cua mang B: { ");
    for(int i = 0; i < 5; i++){
        if (i == 4){
            printf("%d", *(b + i));
        }else{
            printf("%d, ", *(b + i)); 
        } 
    }
    printf("}\n");

    printf("Tong tung cap phan tu A[i] + B[i]: { ");
    for(int i = 0; i < 5; i++){
        if (i == 4){
            printf("%d", *(a + i) + *(b + i));
        }else{
            printf("%d, ", *(a + i) + *(b + i)); 
        }
    }
    printf("}\n");

    int tong = addArray(a, b, 5);
    printf("Tong tat ca cac phan tu cua A va B la: %d\n", tong);

    return 0;
}
