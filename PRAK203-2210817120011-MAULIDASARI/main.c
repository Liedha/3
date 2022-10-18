#include <stdio.h>
int main(){
    float a,b,i,j,x,y,total;
    printf("Masukkan Nilai a :");
    scanf("%f", &a);
    printf("Masukkan Nilai b :");
    scanf("%f",&b);
    printf("Masukkan nilai i :");
    scanf("%f",&i);
    printf("Masukkan nilai j :");
    scanf("%f",&j);
    printf("Masukkan nilai x :");
    scanf("%f",&x);
    printf("Masukkan Nilai y :");
    scanf("%f",&y);
    total =(a-b)*(i/j)-(x+y);
    printf("\n %.3f\n",total);
}
