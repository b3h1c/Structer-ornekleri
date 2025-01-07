#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
/*2-	Bir mobilyan�n imalat�nda mobilyan�n iskelet ve kaplama �zellikleri en �nemli unsurlard�r.  Bir mobilya imalat��s� i�in �r�nlerinin bilgilerini ar�ivlemek i�in a�a��daki tasar�ma ait kodlar� yaz�n�z. 
	"ipliktipi, dm2agirlik, dokumatipi, renk, miktar" �yelerini i�eren "kumas" yap�s� olmal�d�r
	"iskelet" yap�s� ise "malzeme, birle�tirme, tarz, boyut, miktar" �yelerinden olu�mal�d�r
	"mobilya" yap�s� da kuma� yap�s�ndan tan�ml� kaplama de�i�keni, iskelet yap�s�ndan tan�ml� malzeme de�i�keni, int tan�ml� fiyat de�i�keni ve int tan�ml� adet de�i�keni �yelerinden olu�acakt�r (kumas kaplama, iskelet malzeme, int fiyat, int adet) 
	Yukar�daki veri yap�s� tasar�m� �zerine bir mobilya imalat��s�na �retti�i 10 �r�n i�in veri giri�ini, veri listelemeyi ve 10 �r�n�n fiyatlar�n�n toplam�n� hesaplay�p ekrana yazmay� deneyebilece�i bir program yaz�n�z
*/
struct Kumas {
   string ipliktipi;
   int dm2agirlik;
   string dokumatipi;
   string renk;
   int miktar;
};

struct Iskelet{
	string malzeme;
	string birlestirme;
	string tarz;
	int boyut;
	int miktar;
};

struct Mobilya{
	Kumas kaplama;
	Iskelet malzeme;
	int fiyat;
	int adet;
};
 
int main(){
	Mobilya urun[10];
	int toplam=0;
	for(int i=0;i<10;i++){
	 cout<<"--"<<i+1<<". Mobilya Bilgileri--"<<endl;	
		cout<<"**Kaplama Bilgileri**"<<endl;
		 cout<<"�plik tipi girin: ";
		 cin>>urun[i].kaplama.ipliktipi;
		 cout<<"A��rl�k girin: ";
		 cin>>urun[i].kaplama.dm2agirlik;
		 cout<<"Dokuma tipi girin: ";
		 cin>>urun[i].kaplama.dokumatipi;
		 cout<<"Renk girin: ";
		 cin>>urun[i].kaplama.renk;
		 cout<<"Kumas miktar� girin: ";
		 cin>>urun[i].kaplama.miktar;
		 cout<<endl;
	
	    cout<<"**Malzeme Bilgileri**"<<endl;
		 cout<<"Malzeme girin: ";
		 cin>>urun[i].malzeme.malzeme;
		 cout<<"Birle�tirme girin: ";
		 cin>>urun[i].malzeme.birlestirme;
		 cout<<"Tarz girin: ";
		 cin>>urun[i].malzeme.tarz;
		 cout<<"Boyut girin: ";
		 cin>>urun[i].malzeme.boyut;
		 cout<<"Miktar girin: ";
		 cin>>urun[i].malzeme.miktar;
		 cout<<endl;
		 
		 cout<<"Mobilya fiyat� giriniz: ";
		 cin>>urun[i].fiyat;
		 cout<<"Adet giriniz: ";
		 cin>>urun[i].adet;
	
	 toplam+=urun[i].fiyat*urun[i].adet;
	}
	cout<<"Toplam fiyat: "<<toplam<<"TL"<<endl;
	
	for(int i=0;i<10;i++){
	 cout<<"--"<<i+1<<". Mobilya Bilgileri--"<<endl;	
		cout<<"**Kaplama Bilgileri**"<<endl;
		 cout<<"�plik tipi: "<<urun[i].kaplama.ipliktipi<<endl;
		 cout<<"A��rl�k: "<<urun[i].kaplama.dm2agirlik<<endl;
		 cout<<"Dokuma tipi: "<<urun[i].kaplama.dokumatipi<<endl;
		 cout<<"Renk: "<<urun[i].kaplama.renk<<endl;
		 cout<<"Kuma� miktar�: "<<urun[i].kaplama.miktar<<endl;
		 cout<<endl;
	
	    cout<<"**Malzeme Bilgileri**"<<endl;
		 cout<<"Malzeme: "<<urun[i].malzeme.malzeme<<endl;
		 cout<<"Birle�tirme: "<<urun[i].malzeme.birlestirme<<endl;
		 cout<<"Tarz: "<<urun[i].malzeme.tarz<<endl;
		 cout<<"Boyut: "<<urun[i].malzeme.boyut<<endl;
		 cout<<"Miktar: "<<urun[i].malzeme.miktar<<endl;
		 cout<<endl;
}
	
	
}
