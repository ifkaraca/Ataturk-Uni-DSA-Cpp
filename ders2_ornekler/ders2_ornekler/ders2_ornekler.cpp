#include <iostream>
using namespace std;


int main()
{
	//örenek 1:
	/*int dizi[] = { 4,8,12,16 };

	for (int i = 0; i < (sizeof(dizi) / sizeof(dizi[0])) - 1; i++)
	{
		cout << dizi[i] << " ";
	}*/


	//sonuc: 4 8 12

	//örnek 2:
	/*int a[] = { 5,10,15,30,50 };
	cout << 2[a];*/

	//sonuc: 15 çünkü c++ da a[2] ve 2[a] arasında fark yoktur

}
