#include<stdio.h>
int main (){
	int i, tong = 0;

    //Moi nguoi dung nhap so nguyen duong
    do {
        printf("Nhap vao mot so nguyen duong: ");
        scanf("%d", &i);

        if (i <= 0) {
            printf("So khong hop le. Vui lòng nhap lai.\n");
        }
    } while (i <= 0);

    // Tinh tong
    for (int a = 1; a <= i; a++) {
        tong += a;
    }

    // In ket qua
    printf("Tong cac so tu 1 den %d là: %d\n", i, tong);
	return 0;
}
