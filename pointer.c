#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int max(int *x, int *y){
    return (*x > *y) ? *x : *y;
}

int min(int *x, int *y){
    return (*x < *y) ? *x : *y;
}

int add(int *x, int *y){
    return *x + *y;
}

int sub(int *x, int *y){
    return *x - *y;
}

int mul(int *x, int *y){
    return *x * *y;
}

int divi(int *x, int *y){
    if(*y != 0){
        return *x / *y;
    }else{
        printf("Khong the chia cho 0\n");
        return 0;
    }
}

int main(){
    int a = 300, b = 400;
    printf("Gia tri ban dau:\na = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan doi:\na = %d, b = %d\n", a, b);
    printf("Min = %d\n", min(&a, &b));
    printf("Max = %d\n", max(&a, &b));
    printf("Tong = %d\n", add(&a, &b));
    printf("Tich = %d\n", mul(&a, &b));
    printf("Hieu = %d\n", sub(&a, &b));
    printf("Thuong = %d\n", divi(&a, &b));

    return 0;
}
