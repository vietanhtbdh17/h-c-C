#include<stdio.h>

int main(){
    char operation;
    double n1,n2;
    printf("Chon phep tinhs (+,-,*,/): ");
    scanf("%c", &operation);
    printf("Nhap hai so: ");
    scanf("%lf %lf", &n1, &n2);

    switch(operation){
        case '+':
            printf("%.2lf + %.2lf = %.2lf", n1, n2, n1+n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", n1, n2, n1*n2);
            break;
        case '/':
            if(n2 != 0)
                printf("%.2lf / %.2lf = %.2lf", n1, n2, n1/n2);
            else
                printf("Khong the chia cho 0!");
            break;
        default:
            printf("Phep toan khong hop le!");
    }
    return 0;
}