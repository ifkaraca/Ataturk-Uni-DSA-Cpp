#include <iostream>
using namespace std;

// Dairesel kuyruk yapısı
struct Kuyruk
{
    int boyut = 5;
    int onUc = -1;
    int arkaUc = -1;
    int elemanSayisi = 0;

    int* kuyruk = new int[boyut];

    // Kuyruğun dolu olup olmadığını kontrol eder
    bool isFull()
    {
        return elemanSayisi == boyut;
    }

    // Kuyruğun boş olup olmadığını kontrol eder
    bool isEmpty()
    {
        return elemanSayisi == 0;
    }

    // Kuyruğa eleman ekleme
    void enqueue(int deger)
    {
        if (isFull())
        {
            cout << "Kuyruk dolu." << endl;
            return;
        }

        // Kuyruk boşsa ön uç 0. indisi gösterir
        if (isEmpty())
        {
            onUc = 0;
        }

        // Son indisten sonra tekrar 0. indise dönülür
        arkaUc = (arkaUc + 1) % boyut;

        kuyruk[arkaUc] = deger;
        elemanSayisi++;
    }

    // Kuyruktan eleman çıkarma
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Kuyruk boş." << endl;
            return;
        }

        cout << kuyruk[onUc] << " kuyruktan çıkarıldı." << endl;

        // Ön uç dairesel olarak ilerletilir
        onUc = (onUc + 1) % boyut;

        elemanSayisi--;

        // Kuyruk tamamen boşaldıysa uçlar sıfırlanır
        if (elemanSayisi == 0)
        {
            onUc = -1;
            arkaUc = -1;
        }
    }

    // Kuyruk elemanlarını ekrana yazdırma
    void display()
    {
        if (isEmpty())
        {
            cout << "Kuyruk boş." << endl;
            return;
        }

        cout << "Kuyruktaki elemanlar: ";

        int indeks = onUc;

        for (int i = 0; i < elemanSayisi; i++)
        {
            cout << kuyruk[indeks] << " ";

            // Son indisten sonra tekrar 0. indise dönülür
            indeks = (indeks + 1) % boyut;
        }

        cout << endl;
    }

    // Dinamik belleği temizler
    ~Kuyruk()
    {
        delete[] kuyruk;
    }
};

int main()
{
    Kuyruk q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    // Baştaki boşalan alanlar tekrar kullanılabilir
    q.enqueue(60);
    q.enqueue(70);

    q.display();

    return 0;
}