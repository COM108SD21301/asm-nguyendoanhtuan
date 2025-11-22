#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int luaChon;

    do {
        printf("\n================ MENU ================");
        printf("\n1. Chức năng Số nguyên");
        printf("\n2. Tìm UCLN và BCNN");
        printf("\n3. Tính tiền quán Karaoke");
        printf("\n4. Tính tiền điện");
        printf("\n5. Tính tiền lãi");
        printf("\n0. Thoát chương trình");
        printf("\n======================================");
        printf("\nMời bạn nhập lựa chọn: ");
        scanf("%d", &luaChon);

        // Xóa bộ đệm sau scanf
        while (getchar() != '\n');

        switch (luaChon) {
            case 1: {
                float x;
                printf("Mời bạn nhập số x: ");
                scanf("%f", &x);
                while (getchar() != '\n');

                if (x == (int)x) {
                    int n = (int)x;
                    printf("%d là số nguyên\n", n);

                    int can = sqrt(n);
                    if (can * can == n)
                        printf("%d là số chính phương\n", n);
                    else
                        printf("%d không phải số chính phương\n", n);

                    int laNT = 1;
                    if (n < 2) laNT = 0;
                    else {
                        for (int i = 2; i <= sqrt(n); i++) {
                            if (n % i == 0) { laNT = 0; break; }
                        }
                    }

                    if (laNT)
                        printf("%d là số nguyên tố\n", n);
                    else
                        printf("%d không phải số nguyên tố\n", n);

                } else {
                    printf("%.2f là số thực\n", x);
                }
                break;
            }

            case 2:
                printf("Bạn chọn chức năng 2\n");
                break;

            case 3:
                printf("Bạn chọn chức năng 3\n");
                break;

            case 4:
                printf("Bạn chọn chức năng 4\n");
                break;

            case 5:
                printf("Bạn chọn chức năng 5\n");
                break;

            case 0:
                printf("Thoát chương trình...\n");
                break;

            default:
                printf("Lựa chọn không hợp lệ! Vui lòng nhập lại.\n");
        }

        printf("\nNhấn Enter để tiếp tục...");
        getchar();  // chỉ cần 1 lần

    } while (luaChon != 0);

    return 0;
}
