#include <stdio.h>
int main(){
    float bankinh;
    
    printf("Bai 3 : xay dung bang tinh chu vi va dien tich hinh tron\n");
    printf("Day la bang tinh chu vi va dien tich hinh tron(PS4269).\n");
    printf("Vui long nhap ban kinh hinh tron: ");
    scanf("%f",&bankinh);
    #define PI 3.14159265
    float chuvi=bankinh*2*PI;
    float dientich=PI*bankinh*bankinh;
    printf("Chu vi hinh tron la:%.2f \n", chuvi);
    printf("Dien tich hinh tron la: %.2f \n", dientich);
    return 0;
}