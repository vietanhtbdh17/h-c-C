#include<stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sum(n-1);
    }
}
int main(){
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);    
    printf("Tong tu 1 den %d la: %d\n", n, sum(n));
    return 0;
}