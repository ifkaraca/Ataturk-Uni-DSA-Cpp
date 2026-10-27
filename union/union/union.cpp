#include <iostream>
#include <string>
#include <clocale>
using namespace std;

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