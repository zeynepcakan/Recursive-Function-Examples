#include <stdio.h>

//�arpma i�lemi asl�nda bir toplama i�lemidir;Recursive �arpma �rne�i;
int carpmaIslemi(int x, int y);
 
int main() {
    int sayi1;
    int sayi2;
    printf("iki sayi giriniz:  ");
    scanf("%d %d",&sayi1,&sayi2);
    int sonuc = carpmaIslemi(sayi1, sayi2);
    printf("%d * %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int carpmaIslemi(int x, int y) {
    if (y == 0)
        return 0;
    return x + carpmaIslemi(x, y - 1);
}
