#include <stdio.h>
int main(){
    char Nama[15],Nim[15],kelaspararel[15],ttl[15],alamat[15],hobby[15],nohp[15];
    printf("Nama\t\t\t: ");
    scanf("%[^\n]%*c", Nama);
    printf("Nim\t\t\t: ");
    scanf("%[^\n]%*c", Nim);
    printf("Kelas Pararel\t\t: ");
    scanf("%[^\n]%*c", kelaspararel);
    printf("Tempat/Tanggal Lahir\t: ");
    scanf("%[^\n]%*c", ttl);
    printf("Alamat\t\t\t: ");
    scanf("%[^\n]%*c", alamat);
    printf("Hobby\t\t\t: ");
    scanf("%[^\n]%*c", hobby);
    printf("No.HP\t\t\t: ");
    scanf("%[^\n]%*c", nohp);

    printf("\n Nama\t\t\t: %s\n", Nama);
    printf("Nim\t\t\t: %s\n", Nim);
    printf("Kelas Pararel\t\t: %s\n", kelaspararel);
    printf("Tempat/Tanggal Lahir\t: %s\n", ttl);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No.HP\t\t\t: %s\n", nohp);
}
