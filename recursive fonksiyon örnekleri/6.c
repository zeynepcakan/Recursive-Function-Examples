#include <stdio.h>
#include <stdlib.h>

//Recursive bölme islemi;

int bolmeIslemi(int x, int y);
 
int main() {
 
    int sayi1 = 30;
    int sayi2 = 5;
    int sonuc = bolmeIslemi(sayi1, sayi2);
    printf("%d / %d = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int bolmeIslemi(int x, int y) {
    if (y == 0)
        return 0;
    if (x - y == 0)
        return 1;
    if (x < y)
        return 0;
    return (1 + bolmeIslemi(x - y, y));
 
}
