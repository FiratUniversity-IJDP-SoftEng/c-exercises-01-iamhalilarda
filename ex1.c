#include <stdio.h>

int main() {
    int sayi = 3;   // Bilgisayarın tuttuğu sayı
    int tahmin;     // Kullanıcının tahmini

    printf("1 ile 5 arasinda bir sayi tahmin et: ");
    scanf("%d", &tahmin);

    if (tahmin == sayi) {
        printf("Dogru bildin! \n");
    } else {
        printf("Yanlis bildin! Sayi %d idi.\n", sayi);
    }

    return 0;
}
