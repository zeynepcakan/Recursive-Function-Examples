#include <stdio.h>
// faktoriyel: 
 
int faktoriyel(int);
 
int main() {
    int sayi ;
    printf("Lütfen bir sayi girin : ");
    scanf("%d",&sayi);
    int fact = faktoriyel(sayi);
    printf("%d! = %d\n", sayi, fact);
    return 0;
}
 
int faktoriyel(int x) {
    if (x == 0)
        return 1;
    return x * faktoriyel(x - 1);
}
