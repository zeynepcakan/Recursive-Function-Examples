#include <stdio.h>
#include <stdlib.h>

//Girilen say�ya kadar toplam� ekrana yazd�ran program;
 
int girilenSayiyaKadarTopla(int);
 
int main() {
    int sayi;
    printf("bir sayi grin: ");
    scanf("%d",&sayi);
    int sonuc = girilenSayiyaKadarTopla(sayi);
    printf("sonuc = %d\n", sonuc);
    return 0;
}
 
int girilenSayiyaKadarTopla(int x) {
    if (x == 0)
        return 0;
    return x + girilenSayiyaKadarTopla(x - 1);
}
