#include<stdio.h>

int addNumbers(int a, int b){
    return a + b;
}
int subtractNumbers(int a, int b){
    return a - b;
}
int multiplyNumbers(int a, int b){
    return a * b;
}
int divideNumbers(int a, int b){
    if(b != 0){
        return a / b;
    }else{
        printf("Khong the chia cho 0\n");
        return 0;
    }
}
int main(){
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("Tong: %d\n", addNumbers(a, b));
    printf("Hieu: %d\n", subtractNumbers(a, b));
    printf("Tich: %d\n", multiplyNumbers(a, b));
    printf("Thuong: %d\n", divideNumbers(a, b));
    
    return 0;
}