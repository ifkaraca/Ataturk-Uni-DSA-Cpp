#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    // Dizinin boyutu bir değişkene bağlandı. 
    // Bu değer program çalışırken kullanıcıdan da alınabilirdi (örneğin cin >> boyut).
    int boyut = 5;

    // 'new' anahtar kelimesi bellekte (Heap alanı) ardışık 5 adet int için yer ayırır.
    // Bize bu alanın başlangıç adresini döndürür, bunu bir işaretçide (pointer) tutarız.
    int* dizi = new int[boyut];

    // İşaretçi üzerinden diziye değer atamaları yapıyoruz.
    dizi[0] = 18;
    dizi[1] = 20;
    dizi[2] = 22;
    dizi[3] = 24;
    dizi[4] = 26;

    cout << "Dinamik dizi elemanları: ";
    for (int i = 0; i < boyut; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    // ÇOK ÖNEMLİ: 'new' ile alınan bellek işletim sistemine otomatik geri verilmez.
    // Program bitmeden önce 'delete[]' ile bu alanı manuel olarak iade etmeliyiz.
    // Eğer iade etmezsek "Memory Leak" (Bellek Sızıntısı) oluşur ve sistem rami gereksiz dolar.
    delete[] dizi;

    return 0;
}