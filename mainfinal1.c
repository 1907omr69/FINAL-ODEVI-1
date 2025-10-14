#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char ch1, ch2;
    int num1, num2, toplam;

    // Kullanýcýdan iki karakter alýnýr
    printf("Birinci rakam karakterini girin (0-9): ");
    scanf(" %c", &ch1);

    printf("Ikinci rakam karakterini girin (0-9): ");
    scanf(" %c", &ch2);

    // Girilen karakterlerin rakam olup olmadýðýný kontrol et
    if (ch1 < '0' || ch1 > '9' || ch2 < '0' || ch2 > '9') {
        printf("Hata: Sadece rakam karakterleri girilmelidir.\n");
        return 1;
    }

    // ASCII'den sayýya çevirme
    num1 = ch1 - '0';
    num2 = ch2 - '0';

    toplam = num1 + num2;

    // Sonucun tek haneli olup olmadýðýný kontrol et
    if (toplam > 9) {
        printf("Hata: Toplama sonucu tek haneli olmalidir.\n");
    } else {
        printf("Sonuc: %d\n", toplam);
    }

    return 0;
}


