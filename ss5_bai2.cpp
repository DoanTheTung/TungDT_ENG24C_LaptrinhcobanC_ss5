#include<stdio.h>
int main (){
	//khai bao bien so cho truoc va so nguoi dung nhap
	int numb1 = 42;
    int numb2;

    printf("Nhap so cho den khi khop voi so da cho.\n");

    do {
    	//nhap so cua nguoi dung
        printf("Nhap so cua ban la : ");
        scanf("%d", &numb2);

        // Kiem tra neu so không khop
        if (numb1 != numb2) {
            printf("so ban nhap sai roi.\n");
        }
    } while (numb1 != numb2);

    // Khi so khop
    printf("Dap an la : %d.\n", numb1);
	return 0;
}
