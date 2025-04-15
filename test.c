#include<stdio.h>

int main(){
    int a, count , sum = 1;
    printf("Nhap so nguyen duong a:");
    scanf("%d", &a);
    for(count = a; count > 0; --count){
        sum *= count;
    }
    printf("Giai thua cua a la %d", sum);
    return 0;
}