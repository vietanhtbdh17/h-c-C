#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char ten[50];
    printf("Nhập tên của bạn: ");
    fgets(ten, sizeof(ten), stdin);

    // Xóa kí tự '\n' cuối dòng nếu có
    ten[strcspn(ten, "\n")] = '\0';

    printf("Xin chào, %s\n", ten);

    system("pause"); // Giữ cửa sổ lại
    return 0;
}