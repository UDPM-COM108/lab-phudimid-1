#include <stdio.h>
#include <string.h>
int main(){
    float dai,rong;
    char donvi[3];
    printf("Bai2: thuc hien chuong trinh tinh chu vi hinh va dien tich chu nhat.\nf");
    printf("Day la chuong trinh tinh chu vi va dien tich hinh chu nhat.\n");
    printf("don vi M hay Cm?: ");
    scanf("%2s", donvi);
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong hinh chu nhat: "); 
    scanf("%f",&rong);
    if(strcmp(donvi, "cm")==0) {
        dai = dai/100;
        rong = rong/100;
    }
    float chuvi= 2*(dai+rong);
    float dientich=dai*rong;
    printf("Chu vi hinh chu nhat la : %.2fM\n", chuvi);
    printf("Dien tich hinh chu la: %.2fM\n", dientich);
    return 0;
}