#include <iostream>
#include <string>
#include <clocale>
#include <vector>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Turkish");

    //3 satır 4 stündan oluşan bir iki boyutlu dizi
    /*int dizi[3][4] = {
        {1,4,5,2},
        {2,3,1,8},
        {5,4,8,1},
    };*/

    //dizinin elemanlarını ekrana yazdırma
    /*for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << dizi[i][j] << " ";
        }
        cout << endl;
    }*/
    /*sonuç: 1 4 5 2
             2 3 1 8
             5 4 8 1  */

    //for (int j = 0; j < 4; j++) {           //-> bu satır yer değiştirise
    //    for (int i = 0; i < 3; i++) {       //-> bu satır
    //        cout << dizi[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    /*sonuç: 1 2 5
             4 3 4
             5 1 8
             2 8 1  */


    // tek for
  /*  int sutunSayisi = 4;
    int toplamElema = 3 * sutunSayisi;

    for (int i = 0; i < toplamElema; i++) {
        cout << dizi[i / sutunSayisi][i % sutunSayisi] << " ";
        if ((i + 1) % sutunSayisi == 0) {
            cout << endl;
        }
    }*/


    //------------------------------------------------------------------------------------------------------

    ////dinamik sabit boyutlu dizi
    //int boyut = 5;

    ////dinamik olarak bellek ayırma ve değer atama
    //int* dizi = new int[boyut];
    //dizi[0] = 18;
    //dizi[1] = 20;
    //dizi[2] = 22;
    //dizi[3] = 24;
    //dizi[4] = 26;

    //for (int i = 0; i < boyut; i++)
    //{
    //    cout << dizi[i] << " ";
    //}
    //cout << endl;


    //delete[] dizi; -> dinamik diziler işlemler yapıldıktan sonra silinir


    //vector
    /*vector<int> dizi;

    dizi.push_back(18); 
    dizi.push_back(20);
    dizi.push_back(22);

    cout << "Ekleme işlemi sonrası dizi elemanları: ";
    for (int i = 0; i < dizi.size(); i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    dizi.pop_back();

    cout << "silme işlemi sonrasi dizi elemanları: ";
    for (int i = 0; i < dizi.size(); i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;*/
    //------------------------------------------------------------------------------------------------------
    //Bağlı listelerde temel işlemler ( düğüm yapısı )

    return 0;

}