#include <stdio.h>
#include <math.h>
int main(){
    float nilai1,nilai2,total;
    printf("Masukkan Nilai Pertama :");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &nilai2);
    total = nilai1+nilai2;
    printf("\n Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1,nilai2,total);
}

