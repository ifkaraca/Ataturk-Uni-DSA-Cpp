#include <iostream>
#include <string>
#include <clocale>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");

    //örnek 1
    /*int a = 10;
    double b = 5.5;
    float c = 3.14f;
    char d = 'A';
    bool e = true;

    cout << a << " " << b << " " << c << " " << d << " " << e;*/

    //sonuc: 10 5.5 3.14 A 1
    //------------------------------------------------------------------------------------------------------
    //örnek 2
   /* int a = 7.9; tam kısmını verir
    double b = 3;  derleyiciye göre değişir
    char c = 66;   ASCII ye göre verir
    bool d = -5;   0 dışındaki tüm değerler 1 dir

    cout << a << " " << b << " " << c << " " << d;*/

    //sonuc: 7 3 B 1
    //------------------------------------------------------------------------------------------------------
    //örnek 3
    /*char c1 = 'a';      Zaten char değer
    char c2 = 97;         ASCII değeri
    bool b1 = (c1 == c2); ikisi de aynı a değerine eşit
    float f = 1.0 / 3;    bu iki değer arasındaki tek fark hassasiyet farkı
    double d = 1.0 / 3;

    cout << c1 << " " << c2 << " " << b1 << endl;
    cout << f << " " << d;*/

    //sonuc: a a 1
           //0.333333 0.333333
    //------------------------------------------------------------------------------------------------------
    //ornek 4
    //float f = 1.0 / 3;
    //double d = 1.0 / 3;

    //cout << fixed << setprecision(20); // 20 basamak göster
    //cout << "float f = " << f << endl;
    //cout << "double d = " << d << endl;

    //sonuc:  float f = 0.33333334326744079590
           //double d = 0.33333333333333331483
    //------------------------------------------------------------------------------------------------------
    //ornek 5
    /*char c = 'A';         ASCII değerini inte çevirince 65 çıkar
    char d = c + 5;         ASCII değeri olan 65 e 5 eklenince 70 yani F olur
    bool b = (d == 'F');    d zaten 70 değerini yani F yi almıştı
    cout << int(c) << " " << int(d) << " " << b;*/

    //sonuc: 65 70 1
    //------------------------------------------------------------------------------------------------------
    //ornek 6
    /*int a = "Hello";
    cout << a;*/

    //sonuc: const char hatası
    //------------------------------------------------------------------------------------------------------
    //ornek 7
   /* double flag = true;
    cout << flag;*/

    //sonuc: 1
    //------------------------------------------------------------------------------------------------------
    //ornek 8
   /* bool b = true;
    if (b = 5)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }*/

    //sonuc: Yes -> b=5 derken atama yapar ve 0 haricindeki tüm değerler 1 dir
    //------------------------------------------------------------------------------------------------------
    //ornek 9
   /* bool b = true;
    if (b == 5)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }*/
    //sonuc: No -> bu sefer sorgulama yapılıyor
    //------------------------------------------------------------------------------------------------------
    // örnek 11
    /*
    {
        struct Point {
            int x, y;
        };

        Point p1 = { 2, 3 };
        Point p2;
        p2 = p1; // struct kopyalama işlemi
        p2.x = 5;
        cout << p1.x << " " << p2.x << endl;
    }
    */
    // sonuc: 2 5

    //------------------------------------------------------------------------------------------------------
    // örnek 12
    /*
    {
        union Data {
            int i;
            char c;
        };

        Data d;
        d.i = 65;
        cout << d.c << endl; // char olarak okununca A verir
    }
    */
    // sonuc: A

    //------------------------------------------------------------------------------------------------------
    // örnek 13
    /*
    {
        struct Data {
            int type;
            union {
                int i;
                double d;
            } value;
        };

        Data x;
        x.type = 0;
        x.value.i = 42;
        cout << "Type: " << x.type << " Value: " << x.value.i << endl;

        x.type = 1;
        x.value.d = 3.14;
        cout << "Type: " << x.type << " Value: " << x.value.d << endl;
    }
    */
    // sonuc: Type: 0 Value: 42
    //        Type: 1 Value: 3.14

    //------------------------------------------------------------------------------------------------------
    // örnek 14
    /*
    {
        struct Date {
            int day, month, year;
        };
        struct Student {
            char name[20];
            int id;
            Date birth;
        };
        struct ClassRoom {
            Student students[2];
            int roomNo;
        };

        ClassRoom c = { { {"Ali", 101, {1, 4, 2000}},
                          {"Ayse", 102, {2, 5, 2001}} },
                        305 };

        cout << "Class Room: " << c.roomNo << endl;
        cout << "Student1: " << c.students[0].name << " Born: " << c.students[0].birth.day << "/"
             << c.students[0].birth.month << "/" << c.students[0].birth.year << endl;
        cout << "Student2: " << c.students[1].name << " Born: " << c.students[1].birth.day << "/"
             << c.students[1].birth.month << "/" << c.students[1].birth.year << endl;
    }
    */
    // sonuc: Class Room: 305
    //        Student1: Ali Born: 1/4/2000
    //        Student2: Ayse Born: 2/5/2001

    //------------------------------------------------------------------------------------------------------
    // örnek 15
    /*
    {
        cout << sizeof(int) << " " << sizeof(double) << " "
             << sizeof(float) << " " << sizeof(char) << " "
             << sizeof(bool) << endl;
    }
    */
    // sonuc: 4 8 4 1 1

    //------------------------------------------------------------------------------------------------------
    // örnek 16
    /*
    {
        struct A {
            char c1;
            int i;
            char c2;
        };
        struct B {
            char c1;
            char c2;
            int i;
        };

        cout << sizeof(A) << " " << sizeof(B) << endl;
    }
    */
    // sonuc: 12 8

    //------------------------------------------------------------------------------------------------------
    // örnek 17
    /*
    {
        struct KisiS {
            char adinIlkHarfi;
            int yas;
            double kilo;
        };
        union KisiU {
            char adinIlkHarfi;
            int yas;
            double kilo;
        };

        cout << sizeof(KisiS) << " " << sizeof(KisiU) << endl;
    }
    */
    // sonuc: 16 8

    //------------------------------------------------------------------------------------------------------
    // örnek 18
    /*
    {
        int a = 5, b = 8;
        a = b;
        b = a;
        cout << a << " " << b << endl;
    }
    */
    // sonuc: 8 8

    //------------------------------------------------------------------------------------------------------
    // örnek 19
    /*
    {
        int i = 1;
        while (i != 10) {
            cout << i << " ";
            i += 2;
        }
        cout << "Bitti";
    }
    */
    // sonuc: Sonsuz döngü. (1 3 5 7 9 11 13... şeklinde devam eder)

    //------------------------------------------------------------------------------------------------------
    // örnek 20
    /*
    {
        int sayi;
        cin >> sayi;
        if (sayi % 2 == 0)
            cout << "Cift" << endl;
        else
            cout << "Tek" << endl;
    }
    */
    // sonuc: 7 girilirse Tek yazar.

    //------------------------------------------------------------------------------------------------------
    // örnek 21
    /*
    {
        struct Kisi {
            string ad;
            int yas;
            double kilo;
        };

        Kisi k[3] = { {"Ali", 20, 70.5},
                      {"Ayse", 23, 55},
                      {"Can", 21, 80} };
        int enYasli = 0;
        double toplam = 0;

        for (int i = 0; i < 3; i++) {
            if (k[i].yas > k[enYasli].yas)
                enYasli = i;
            toplam += k[i].kilo;
        }
        cout << "En yasli: " << k[enYasli].ad << endl;
        cout << "Ortalama kilo: " << toplam / 3 << endl;
    }
    */
    // sonuc: En yasli: Ayse 
    //        Ortalama kilo: 68.5

    //------------------------------------------------------------------------------------------------------
    // örnek 22
    /*
    {
        struct Data {
            unsigned int type : 2;
            union {
                int i;
                float f;
                struct {
                    char c1;
                    char c2;
                    char c3;
                } s;
            } value;
        };

        Data d;
        d.type = 0;
        d.value.i = 12345;
        cout << "Type=" << d.type << " Int=" << d.value.i << endl;

        d.type = 1;
        d.value.f = 3.14f;
        cout << "Type=" << d.type << " Float=" << d.value.f << endl;

        d.type = 2;
        d.value.s.c1 = 'A';
        d.value.s.c2 = 'B';
        cout << "Type=" << d.type << " Struct=" << d.value.s.c1 << d.value.s.c2 << endl;

        d.type = 5;
        d.value.s.c1 = 'E';
        d.value.s.c2 = 'A';
        d.value.s.c3 = 'B';
        cout << "Type=" << d.type << " Struct=" << d.value.s.c1 << d.value.s.c2 << d.value.s.c3 << endl;
    }
    */
    // sonuc: Struct içinde bitfields (type: 2) sınırı sebebiyle, type'a 5 atandığında (101 binary) taşma olur ve ekrana sadece sığan 1 değeri yazılır.








































    return 0;
}
