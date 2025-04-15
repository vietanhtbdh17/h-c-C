#include<stdio.h>
int count_digit(int n){
    int count = 0;
    do{
        n /= 10;
        ++count;
    }while(n != 0);
    return count;
}
int main(){
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("So chu so cua %d la %d", n, count_digit(n));
    return 0;
}