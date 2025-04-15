#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double number, sum = 0.0;

    for (i = 1; i <= 10; ++i) {
        printf("Nhap so %d: ", i);

        // Kiểm tra đầu vào hợp lệ
        if (scanf("%lf", &number) != 1) {
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
            // Xóa bộ đệm để tránh vòng lặp vô hạn
            while (getchar() != '\n');
            --i; // Lặp lại lần nhập này
            continue;
        }

        printf("So vua nhap: %.2lf\n", number);

        sum += number;

        if (number < 0) {
            printf("Gap so am, thoat vong lap.\n");
            break;
        }
    }

    printf("Tong cac so da nhap la: %.2lf\n", sum);

    system("pause"); // Dừng màn hình để xem kết quả
    return 0;
}