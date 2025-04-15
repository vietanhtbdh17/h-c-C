#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float score;
} Student;
int main() {
    int n;
    printf("Nhap so sinh vien ban dau: ");
    scanf("%d", &n);

    // Cấp phát vùng nhớ ban đầu bằng calloc (tự động gán 0)
    Student *list = (Student *)calloc(n, sizeof(Student));

    if (list == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  Ten: ");
        scanf(" %[^\n]", list[i].name);  // đọc chuỗi có khoảng trắng
        printf("  Tuoi: ");
        scanf("%d", &list[i].age);
        printf("  Diem: ");
        scanf("%f", &list[i].score);
    }

    // Mở rộng danh sách bằng realloc
    int m;
    printf("\nNhap so sinh vien muon them: ");
    scanf("%d", &m);

    Student *temp = realloc(list, (n + m) * sizeof(Student));
    if (temp == NULL) {
        printf("Khong the mo rong bo nho!\n");
        free(list);
        return 1;
    }
    list = temp;

    // Nhập thêm sinh viên
    for (int i = n; i < n + m; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  Ten: ");
        scanf(" %[^\n]", list[i].name);
        printf("  Tuoi: ");
        scanf("%d", &list[i].age);
        printf("  Diem: ");
        scanf("%f", &list[i].score);
    }

    // In danh sách sinh viên
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d. %s - Tuoi: %d - Diem: %.2f\n", i + 1, list[i].name, list[i].age, list[i].score);
    }

    // Giải phóng bộ nhớ
    free(list);
    return 0;
}
