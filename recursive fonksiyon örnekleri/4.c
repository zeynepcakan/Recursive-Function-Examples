#include <stdio.h>
#include <stdlib.h>

//Recursive fonksiyon ile üs alma iþlemi;

int usAlma(int, int);
 
int main() {
    int taban;
    int us;
    int sonuc;
    
    printf("Taban degeri girin: ");
    scanf("%d",&taban);
    
    printf("Us degeri girin: ");
    scanf("%d",&us);
 
    sonuc = usAlma(taban, us);
 
    printf("(%d)^%d = %d\n", taban, us, sonuc);
    return 0;
}
 
int usAlma(int taban, int us) {
    if (us == 0)
        return 1;
    return taban * usAlma(taban, us - 1);
}
