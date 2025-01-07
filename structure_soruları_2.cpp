#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
/*2-	Bir mobilyanýn imalatýnda mobilyanýn iskelet ve kaplama özellikleri en önemli unsurlardýr.  Bir mobilya imalatçýsý için ürünlerinin bilgilerini arþivlemek için aþaðýdaki tasarýma ait kodlarý yazýnýz. 
	"ipliktipi, dm2agirlik, dokumatipi, renk, miktar" üyelerini içeren "kumas" yapýsý olmalýdýr
	"iskelet" yapýsý ise "malzeme, birleþtirme, tarz, boyut, miktar" üyelerinden oluþmalýdýr
	"mobilya" yapýsý da kumaþ yapýsýndan tanýmlý kaplama deðiþkeni, iskelet yapýsýndan tanýmlý malzeme deðiþkeni, int tanýmlý fiyat deðiþkeni ve int tanýmlý adet deðiþkeni üyelerinden oluþacaktýr (kumas kaplama, iskelet malzeme, int fiyat, int adet) 
	Yukarýdaki veri yapýsý tasarýmý üzerine bir mobilya imalatçýsýna ürettiði 10 ürün için veri giriþini, veri listelemeyi ve 10 ürünün fiyatlarýnýn toplamýný hesaplayýp ekrana yazmayý deneyebileceði bir program yazýnýz
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
		 cout<<"Ýplik tipi girin: ";
		 cin>>urun[i].kaplama.ipliktipi;
		 cout<<"Aðýrlýk girin: ";
		 cin>>urun[i].kaplama.dm2agirlik;
		 cout<<"Dokuma tipi girin: ";
		 cin>>urun[i].kaplama.dokumatipi;
		 cout<<"Renk girin: ";
		 cin>>urun[i].kaplama.renk;
		 cout<<"Kumas miktarý girin: ";
		 cin>>urun[i].kaplama.miktar;
		 cout<<endl;
	
	    cout<<"**Malzeme Bilgileri**"<<endl;
		 cout<<"Malzeme girin: ";
		 cin>>urun[i].malzeme.malzeme;
		 cout<<"Birleþtirme girin: ";
		 cin>>urun[i].malzeme.birlestirme;
		 cout<<"Tarz girin: ";
		 cin>>urun[i].malzeme.tarz;
		 cout<<"Boyut girin: ";
		 cin>>urun[i].malzeme.boyut;
		 cout<<"Miktar girin: ";
		 cin>>urun[i].malzeme.miktar;
		 cout<<endl;
		 
		 cout<<"Mobilya fiyatý giriniz: ";
		 cin>>urun[i].fiyat;
		 cout<<"Adet giriniz: ";
		 cin>>urun[i].adet;
	
	 toplam+=urun[i].fiyat*urun[i].adet;
	}
	cout<<"Toplam fiyat: "<<toplam<<"TL"<<endl;
	
	for(int i=0;i<10;i++){
	 cout<<"--"<<i+1<<". Mobilya Bilgileri--"<<endl;	
		cout<<"**Kaplama Bilgileri**"<<endl;
		 cout<<"Ýplik tipi: "<<urun[i].kaplama.ipliktipi<<endl;
		 cout<<"Aðýrlýk: "<<urun[i].kaplama.dm2agirlik<<endl;
		 cout<<"Dokuma tipi: "<<urun[i].kaplama.dokumatipi<<endl;
		 cout<<"Renk: "<<urun[i].kaplama.renk<<endl;
		 cout<<"Kumaþ miktarý: "<<urun[i].kaplama.miktar<<endl;
		 cout<<endl;
	
	    cout<<"**Malzeme Bilgileri**"<<endl;
		 cout<<"Malzeme: "<<urun[i].malzeme.malzeme<<endl;
		 cout<<"Birleþtirme: "<<urun[i].malzeme.birlestirme<<endl;
		 cout<<"Tarz: "<<urun[i].malzeme.tarz<<endl;
		 cout<<"Boyut: "<<urun[i].malzeme.boyut<<endl;
		 cout<<"Miktar: "<<urun[i].malzeme.miktar<<endl;
		 cout<<endl;
}
	
	
}
