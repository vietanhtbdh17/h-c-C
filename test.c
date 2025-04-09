#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a > 0){
        printf("%d la so lon hon khong \n",a);
    }
    else if(a < 0){
        printf("%d la so nho hon khong \n",a);
    }
    else{
        printf("%d la so khong \n",a);
    }
    printf("Hoan thanh\n");
}