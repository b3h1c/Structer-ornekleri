#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
/*3-	Bir özel kurye iþletmesi için aþaðýdaki özelliklerde bir programa ihtiyaç duyulmaktadýr. 
	gönderinin gönderen ve alýcýsý vardýr. Gönderen ve alýcý "adý_soyadý, adresi, telefon_no, adres" bilgilerine sahiptir.
	gönderinin de "gönderi_no, aðýrlýk, hacim, garanti(e/h), ücret" olarak kendi bilgileri vardýr.
	kuryenin "adý_soyadý, telefon_no" bilgileri vardýr.
Bu ihtiyaçlara göre 5 adet gönderinin adresten alým, adrese teslim süreçlerini kayýt altýnda tutacak bir veri yapýsý tanýmlayýn ve 5 adet gönderi için deneyin
*/
struct Kisi{
	string ad_soyad;
	string adres;
	string tel_no;
};

struct Gonderi{
	int gonderi_no;
	float agirlik;
	float hacim;
	char garanti;
	int ucret;
	Kisi gonderen;
	Kisi alici;
};

struct Kurye{
	string ad_soyad;
	string tel_no;
};
int main(){
	Gonderi gonderi[2];
	Kurye kurye;
	
	cout<<"Kurye ad soyad girin: ";
	getline(cin,kurye.ad_soyad);
	cout<<"Kurye tel no girin: ";
	getline(cin,kurye.tel_no);
	
	for(int i=0;i<2;i++){
		cout<<"--"<<i+1<<". Gönderi Bilgileri--"<<endl;
		cout<<"Gönderi no girin: ";
		cin>>gonderi[i].gonderi_no;
		cout<<"Aðýrlýk girin: ";
		cin>>gonderi[i].agirlik;
		cout<<"Hacim girin: ";
		cin>>gonderi[i].hacim;
		cout<<"Garanti (evet=e,hayýr=h): ";
		cin>>gonderi[i].garanti;
		cout<<"Ücret girin: ";
		cin>>gonderi[i].ucret;
		
		cout<<"**Gönderen Bilgileri**"<<endl;
		cout<<"Gönderici ad soyad: ";
		getline(cin,gonderi[i].gonderen.ad_soyad);
		cout<<"Gönderici tel no: ";
		getline(cin,gonderi[i].gonderen.tel_no);
		cout<<"Gönderici adres: ";
		getline(cin,gonderi[i].gonderen.adres);
		
		cout<<"**Alýcý Bilgileri**"<<endl;
		cout<<"Alýcý ad soyad: ";
		getline(cin,gonderi[i].alici.ad_soyad);
		cout<<"Alýcý tel no: ";
		getline(cin,gonderi[i].alici.tel_no);
		cout<<"Alýcý adres: ";
		getline(cin,gonderi[i].alici.adres);
	}

    cout<<"--Gönderi Bilgileri--"<<endl;
    for(int i=0;i<2;i++){
     cout<<"--"<<i+1<<". Gönderi Bilgileri--"<<endl;
		cout<<"Gönderi no: "<<gonderi[i].gonderi_no<<endl;
		cout<<"Gönderi aðýrlýðý: "<<gonderi[i].agirlik<<endl;	
		cout<<"Gönderi hacmi: "<<gonderi[i].hacim<<endl;
		cout<<"Gönderi garantisi: "<<gonderi[i].garanti<<endl;
		cout<<"Gönderi ücreti: "<<gonderi[i].ucret<<endl;
		
	cout<<"**Gönderen Bilgileri**"<<endl;
		cout<<"Gönderen ad soyad: "<<gonderi[i].gonderen.ad_soyad<<endl;
		cout<<"Gönderen tel no: "<<gonderi[i].gonderen.tel_no<<endl;
		cout<<"Gönderen adres: "<<gonderi[i].gonderen.adres<<endl;
	
	cout<<"**Alýcý Bilgileri**"<<endl;
		cout<<"Alýcý ad soyad: "<<gonderi[i].alici.ad_soyad<<endl;
		cout<<"Alýcý tel no: "<<gonderi[i].alici.tel_no<<endl;
		cout<<"Alýcý adres: "<<gonderi[i].alici.adres<<endl;
	
	}
  
  cout<<"**Kurye Bilgileri**"<<endl;
        cout<<"Kurye ad soyad: "<<kurye.ad_soyad<<endl;
		cout<<"Kurye tel no: "<<kurye.tel_no<<endl;



	
	system("pause");
	return 0;
}
