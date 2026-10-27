#include <iostream>
#include <string>
#include <clocale>
using namespace std;


//topluluk oluşturma: struct
	//içerisindeki verilerin her biri farklı hücrelerde tutulur bu durumda çağırılan veriler bir sonraki turda silinmez veya değişmez

struct Kisi
{
	string ad;
	int yas;
	double kilo;
};


//çoklu topluluk oluşturma: struct

struct
{
	string ad;
	int yas;
	double kilo;
}Musteri1, Musteri2;

int main()
{
	setlocale(LC_ALL, "Turkish");
	/*Kisi kisi;
	kisi.ad = "Ayla";
	kisi.kilo = 50;
	kisi.yas = 20;


	cout << "Ad: " << kisi.ad << endl;
	cout << "Yas: " << kisi.yas << endl;
	cout << "Kilo: " << kisi.kilo << endl;*/


	/*Musteri1.ad = "Ayla";
	Musteri1.kilo = 50;
	Musteri1.yas = 20;

	Musteri2.ad = "Ayla";
	Musteri2.kilo = 50;
	Musteri2.yas = 20;

	cout << "Müşteri 1 Bilgileri" << endl;
	cout << "Ad: " << Musteri1.ad << endl;
	cout << "Yas: " << Musteri1.yas << endl;
	cout << "Kilo: " << Musteri1.kilo << endl;

	cout << "Müşteri 2 Bilgileri" << endl;
	cout << "Ad: " << Musteri2.ad << endl;
	cout << "Yas: " << Musteri2.yas << endl;
	cout << "Kilo: " << Musteri2.kilo << endl;*/

	return 0;
}