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
}Musteri1,Musteri2;

//topluluk oluşturma : union
	//içerisindeki veriler sadece tek bir hücrede tutulur bu nedenle bir sonraki turda ya silinir ya da en son işlem yapılan değeri verir

union Ogrenci
{
	char adinIlkHarfi;
	int yas;
	double kilo;
};

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

	Ogrenci ogrenci;

	////sadece adinIlkHarfi kullanalım
	//ogrenci.adinIlkHarfi = 'A';
	//cout << "Adin İlk Harfi: " << ogrenci.adinIlkHarfi << endl;

	////sadece yas kullanalım
	//ogrenci.yas = 20;
	//cout << "Yaş: " << ogrenci.yas << endl;

	////sadece kilo kullanalım
	//ogrenci.kilo = 50;
	//cout << "Kilo: " << ogrenci.kilo << endl;

	ogrenci.yas = 20;
	cout << "Yaş: " << ogrenci.yas << endl; //20

	ogrenci.kilo = 50;
	cout << "Kilo: " << ogrenci.kilo << endl;//50

	cout << "Yaş: " << ogrenci.yas << endl; //0
	cout << "Kilo: " << ogrenci.kilo << endl;//50

	return 0;
}