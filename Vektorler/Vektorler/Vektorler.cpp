#include <iostream>
#include <vector> // Vektör yapısını kullanabilmek için kütüphaneyi dahil ediyoruz
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");

    // İçinde tam sayı (int) tutacak boş bir vektör tanımlıyoruz.
    // Başlangıçta boyutu 0'dır, bellek sınırımız yok.
    vector<int> dizi;

    // push_back(): Vektörün en sonuna yeni bir eleman ekler.
    // Eğer vektörde yer yoksa, arka planda yeni ve daha büyük bir bellek ayırır,
    // eski verileri oraya kopyalar ve yeni veriyi ekler. Biz bu zahmeti görmeyiz.
    dizi.push_back(18); // Boyut 1 oldu
    dizi.push_back(20); // Boyut 2 oldu
    dizi.push_back(22); // Boyut 3 oldu

    cout << "Ekleme işlemi sonrası dizi elemanları: ";
    // dizi.size() metodu vektörün o anki aktif eleman sayısını verir.
    for (int i = 0; i < dizi.size(); i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    // pop_back(): Vektörün en sonundaki elemanı (burada 22) siler.
    // Boyutu bir küçültür.
    dizi.pop_back();

    cout << "Silme işlemi sonrası dizi elemanları: ";
    for (int i = 0; i < dizi.size(); i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    return 0;
}