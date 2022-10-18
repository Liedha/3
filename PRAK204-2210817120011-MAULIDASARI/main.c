#include <stdio.h>
int main(){
    float r,tinggi,volume,luas,keliling,phi;
    phi =3.142857;

    printf("Masukkan jari-jari :");
    scanf("%f", &r);
    printf("Masukkan Tinggi :");
    scanf("%f", &tinggi);

    volume =phi*(r*r)*tinggi;
    luas =(phi*(r*r))+(phi*(r*r))+(2*phi*r*tinggi);
    keliling =2*phi*r;

    printf("\nVolume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n",keliling);
}
