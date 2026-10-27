#include <iostream>
using namespace std;

struct Yigin
{
    int veri = 0;               // Yığındaki veri
    Yigin* sonraki = nullptr;   // Sonraki düğüme işaretçi
    Yigin* top = nullptr;       // Yığın en üstteki elemanı gösterir

    // Yığının boş olup olmadığını kotrol etme
    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int deger)
    {
        Yigin* yeniDugum = new Yigin();
        if (!yeniDugum)
        {
            cout << "Bellek hatasi: Yeni dugum olusturalamadi. \n";
            return;
        }

        yeniDugum->veri = deger;      //Düğüm verisini ayarla
        yeniDugum->sonraki = top;     //Yeni düğüm mevcut tepeyi gösterir
        top = yeniDugum;              //Yeni düğüm tepe olur
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        Yigin* gecici = top;
        cout << "Yigin elemanlari: ";
        while (gecici != nullptr)
        {
            cout << gecici->veri << " ";
            gecici = gecici->sonraki;
        }
        cout << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        Yigin* gecici = top;
        top = top->sonraki;
        delete gecici;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Yiğin boş. \n";
            return;
        }
        cout << " Yiginin tepesindeki eleman: " << top->veri << endl;
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


    return 0;
}