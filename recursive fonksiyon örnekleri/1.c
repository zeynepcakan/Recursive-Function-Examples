#include <stdio.h>
#include <stdlib.h>

//Girilen say�ya kadar olan say�lar� g�steren program;

int girilenSayiyaKadargoster(int);
 
int main() {
    int sayi ;
    printf("sayi girin: ");
    scanf("%d",&sayi);
    int sonuc = girilenSayiyaKadargoster(sayi);
    printf("%d\n", sonuc);
    return 0;
}
 
int girilenSayiyaKadargoster(int x) {
    if (x == 0)
        return 0;
    printf("%d ", x);
    return girilenSayiyaKadargoster(x - 1);
 
}
