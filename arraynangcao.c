#include <stdio.h>

void addarray(float a[2][2], float b[2][2], float result[2][2]) {
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            result[i][j] = a[i][j] + b[i][j];
}

void subarray(float a[2][2], float b[2][2], float result[2][2]) {
    int i, j;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            result[i][j] = a[i][j] - b[i][j];
}

void mularray(float a[2][2], float b[2][2], float result[2][2]) {
    int i, j, k;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < 2; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    float a[2][2], b[2][2], result[2][2];
    int i, j;

    printf("Nhap ma tran a:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);  
        }
    }

    printf("Nhap ma tran b:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("b[%d][%d] = ", i, j);
            scanf("%f", &b[i][j]);
        }
    }

    printf("Ma tran a:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.2f ", a[i][j]);  
        }
        printf("\n");
    }

    printf("Ma tran b:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }

    addarray(a, b, result);
    printf("Tong hai ma tran:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    subarray(a, b, result);
    printf("Hieu hai ma tran:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    mularray(a, b, result);
    printf("Tich hai ma tran:\n");
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}