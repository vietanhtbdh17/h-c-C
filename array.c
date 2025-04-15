#include<stdio.h>

int function(int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
double average(int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i];
    }
    return sum/n;
}
int max(int a[], int n){
    int i, max = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int min(int a[], int n){
    int i, min = a[0];
    for(i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main(){
    int a[100], n, i;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu:\n");
    for(i = 0; i < n; i++){
        printf("Phan tu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu trong mang la: ");
    printf("{");
    for(i = 0; i < n; i++){
        if(i == n-1){
            printf("%d", a[i]);
        }else
        printf("%d,", a[i]);
    }
    printf("}\n");
    printf("\n");
    printf("Tong cac phan tu trong mang la: %d\n", function(a, n));
    printf("Trung binh cac phan tu trong mang la: %.2lf\n", average(a, n));
    printf("Phan tu lon nhat trong mang la: %d\n", max(a, n));
    printf("Phan tu nho nhat trong mang la: %d\n", min(a, n));
    return 0;
}