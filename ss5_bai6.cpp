#include<stdio.h>
int main (){
	int choice;
    float num1, num2;

    //Moi nguoi dung nhap hai so
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    //In ra man hinh menu và xu ly cac chuc nang
    do {
        printf("\n=== CALCULATOR ===\n");
        printf("1. Tong 2 so \n");
        printf("2. Hieu 2 so \n");
        printf("3. Tich 2 so \n");
        printf("4. Thuong 2 so \n");
        printf("5. Thoat \n");
        printf("Chon mot chuc nang (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong hai so là: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Hieu hai so là: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Tich hai so là: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong hai so là: %.2f\n", num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trình. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon tu 1 den 5.\n");
        }
    } while (choice != 5);
	return 0;
}
