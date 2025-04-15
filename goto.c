#include<stdio.h>

int main(){
    const int max = 10;
    int i = 1;
    double number, average, sum = 0.0;
    for(i = 1; i <= max; ++i){
        printf("Nhap so %d:",i);
        scanf("%lf", &number);
        if(number < 0.0){
            printf("So am khong duoc phep nhap, Ket thuc chuong trinh\n");
            goto end;
        }
        sum += number;
    }
    end:
    average = sum / (i-1);
    printf("Tong cua cac so duong da nhap la %.2lf\n", sum);
    printf("Trung binh cua cac so duong da nhap la %.2lf\n", average);
    return 0;
}