#include <stdio.h>
#include <windows.h>

int main() {
    // Thiết lập console để hỗ trợ UTF-8

    int id;
    char name[100];
    float score;

    printf("Nhập ID: ");
    scanf("%d", &id);

    printf("Nhập tên: ");
    scanf(" %[^\n]", name);  // Dấu cách và tiếng Việt có dấu

    printf("Nhập điểm: ");
    scanf("%f", &score);

    printf("📝 Đã thêm sinh viên thành công!\n");
    printf("👉 ID: %d | Tên: %s | Điểm: %.2f\n", id, name, score);

    return 0;
}
