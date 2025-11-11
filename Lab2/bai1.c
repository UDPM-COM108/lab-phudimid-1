#include <stdio.h>
int main(){
    float a,b;
    printf("Bai 1: Thuc hanh tinh  +- 2 so\n");
    printf("cre Nguyen Van Phu (PS49269)\n");
    printf("nhap so thu nhat de tinh tong hieu: ");
    scanf("%f", &a);
    printf("nhap so thu hai de tinh tong hieu: ");
    scanf("%f", &b);

    // nhap phep tinh
    float tong= a+b;
    float hieu= a-b;

    //xuat ket qua
    printf("Tong cua 2 so la: %.1f\n",tong);
    printf("Hieu cua 2 so la: %.1f\n", hieu);
    return 0;
}