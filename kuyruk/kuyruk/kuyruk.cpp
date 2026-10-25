#include <iostream>
using namespace std;



//Dizilerde kuyruk oluşturma
//Enqueue (Ekleme) = Eleman dizinin sonunda eklenir
//Dequeue (Çıkarma) = Eleman dizinin başından çıkartılır
//isEmpty = Kuyruğun boş olup olmadığını kontrol eder
//isFull = Kuyruğun dolu olup olmadığını kontrol eder

struct Kuyruk
{
    int onUc = -1, arkaUc = -1, boyut = 5;
    int* kuyruk = new int[boyut]; //Belirtilen boyutta dizi (kuyruk) oluşturulur

    // Kuyruğun dolu olup olmadığını kontrol etme
    bool isFull() {
        return arkaUc == boyut - 1;
    }

    // Kuyruğun boş olup olmadığını kontrol eder
    bool isEmpty() {
        return onUc == -1;
    }

    // Eleman ekleme
    void enqueue(int deger)
    {
        if (isFull())
        {
            cout << "Kuyruk Dolu." << endl;
            return;
        }
        else
        {
            if (onUc == -1)
            {
                onUc = 0;     // Kuyruk ilk kez kullanıldığında onUc sıfırlanır
            }
            arkaUc++;    //arkaUc dizinin sonuna kadar artar
            kuyruk[arkaUc] = deger;
        }
    }

    // Kuyruğun elemanlarını ekrana yazdırma
    void display()
    {
        if (isEmpty())
        {
            cout << "Kuyruk boş." << endl;
            return;
        }

        cout << "Kuyruktaki elemanlar: ";
        for (int i = onUc; i <= arkaUc; i++)
        {
            cout << kuyruk[i] << " ";
        }
        cout << endl;
    }

    // Eleman silme (dequeue)
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Kuyruk boş." << endl;
            return;
        }
        else
        {
            if (onUc == arkaUc) // Son eleman çıkarılşdığında kuyruk sıfırlanır
            {
                onUc = -1;
                arkaUc = -1;
            }
            else
            {
                onUc++; // Ön uç bir sonraki elemanı gösterir
            }
        }
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
    q.display(),
    delete[] q.kuyruk;

    return 0;
}