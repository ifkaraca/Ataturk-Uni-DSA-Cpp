#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    // Bellekte 3 satır ve 4 sütunluk ardışık bir alan ayırıyoruz.
    // Toplam 12 (3x4) tam sayı barındırır.
    int dizi[3][4] = {
        { 1, 4, 5, 2 }, // 0. Satır
        { 2, 3, 1, 8 }, // 1. Satır
        { 5, 4, 8, 1 }, // 2. Satır
    };

    cout << "Standart iç içe for döngüsü ile yazdırma (Satır Öncelikli):" << endl;
    // Dıştaki döngü satırları, içteki döngü o satırdaki sütunları gezer.
    // Okuma sırası soldan sağa, yukarıdan aşağıyadır.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << dizi[i][j] << " ";
        }
        cout << endl; // Her satır bittiğinde alt satıra geç
    }

    cout << "\nSütun öncelikli (ters) yazdırma:" << endl;
    // Döngülerin yerini değiştirdiğimizde, önce 0. sütundaki tüm satırları okuruz.
    // Okuma sırası yukarıdan aşağıya, soldan sağadır.
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cout << dizi[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTek for döngüsü ile yazdırma (Matematiksel İndisleme):" << endl;
    // İki boyutlu diziler bellekte aslında tek satır (ardışık) halinde tutulur.
    // Bölme (/) ve mod (%) işlemleriyle tek boyuttaki bir indeksi, iki boyuta dönüştürebiliriz.
    int sutunSayisi = 4;
    int toplamEleman = 3 * sutunSayisi; // Toplam 12 eleman

    for (int i = 0; i < toplamEleman; i++) {
        // i / sutunSayisi -> Bize o an hangi satırda olduğumuzu verir (Örn: 5/4 = 1. satır)
        // i % sutunSayisi -> Bize o an hangi sütunda olduğumuzu verir (Örn: 5%4 = 1. sütun)
        cout << dizi[i / sutunSayisi][i % sutunSayisi] << " ";

        // Her 4 elemanda bir satır atlamak için kontrol
        if ((i + 1) % sutunSayisi == 0) {
            cout << endl;
        }
    }

    return 0;
}