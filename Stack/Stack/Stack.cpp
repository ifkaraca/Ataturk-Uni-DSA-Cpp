#include <iostream>
using namespace std;


// Push(Ekleme) : Yığına eleman ekler
// Pop(Çıkarma) : Yığından eleman çıkarır
// Peek(Bakma)  : Yığının en üsteki elemanını görüntüler
// Top(En Üst)  : Yığının en üsteki elemanını tanımlar
// isEmpty      : Yığının boş olup olmadığını kontrol eder
// isFull       : Yığının dolu olup olmadığını kontrol eder

struct Yigin
{
    int top = -1, boyut = 5;
    int* yigin = new int[boyut]; //belirtilen boyutta dizi (yığın) oluşturulur

    // Kuyruğun boş olup olmadığını kontrol eder
    bool isEmpty()
    {
        return (top < 0);
    }


    // Kuyruğun dolu olup olmadığını kontrol etme
    bool isFull()
    {
        return (top >= (boyut - 1));
    }

    // Yığına eleman ekler
    void push(int deger)
    {
        if (isFull())
        {
            cout << "Yiğin dolu. \n";
            return;
        }
        else
        {
            yigin[++top] = deger;      // Yeni elemanı en üstteki konuma yerleştirir
        }
    }

    //Yığındaki tüm elemanları yazdırma
    void display()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        else
        {
            cout << "Yigin elemanlari: ";
            for (int i = top; i >= 0; i--)
            {
                cout << yigin[i] << " ";
            }
            cout << endl;
        }
    }

    //Yığından eleman çıkarma (pop)
    void pop()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        else 
        {
            yigin[top--]; //En üstteki elemanı çıkar
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        else
        {
            cout << yigin[top] << " ";
        }
    }
};


int main()
{
    Yigin y;

    y.push(10);
    y.push(20);
    y.push(30);
    y.push(40);
    y.push(50);

    y.peek();

    y.display();

    y.pop();

    y.peek();

    y.display();

    delete[] y.yigin;

    return 0;
}
