#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
/*3-	Bir �zel kurye i�letmesi i�in a�a��daki �zelliklerde bir programa ihtiya� duyulmaktad�r. 
	g�nderinin g�nderen ve al�c�s� vard�r. G�nderen ve al�c� "ad�_soyad�, adresi, telefon_no, adres" bilgilerine sahiptir.
	g�nderinin de "g�nderi_no, a��rl�k, hacim, garanti(e/h), �cret" olarak kendi bilgileri vard�r.
	kuryenin "ad�_soyad�, telefon_no" bilgileri vard�r.
Bu ihtiya�lara g�re 5 adet g�nderinin adresten al�m, adrese teslim s�re�lerini kay�t alt�nda tutacak bir veri yap�s� tan�mlay�n ve 5 adet g�nderi i�in deneyin
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
		cout<<"--"<<i+1<<". G�nderi Bilgileri--"<<endl;
		cout<<"G�nderi no girin: ";
		cin>>gonderi[i].gonderi_no;
		cout<<"A��rl�k girin: ";
		cin>>gonderi[i].agirlik;
		cout<<"Hacim girin: ";
		cin>>gonderi[i].hacim;
		cout<<"Garanti (evet=e,hay�r=h): ";
		cin>>gonderi[i].garanti;
		cout<<"�cret girin: ";
		cin>>gonderi[i].ucret;
		
		cout<<"**G�nderen Bilgileri**"<<endl;
		cout<<"G�nderici ad soyad: ";
		getline(cin,gonderi[i].gonderen.ad_soyad);
		cout<<"G�nderici tel no: ";
		getline(cin,gonderi[i].gonderen.tel_no);
		cout<<"G�nderici adres: ";
		getline(cin,gonderi[i].gonderen.adres);
		
		cout<<"**Al�c� Bilgileri**"<<endl;
		cout<<"Al�c� ad soyad: ";
		getline(cin,gonderi[i].alici.ad_soyad);
		cout<<"Al�c� tel no: ";
		getline(cin,gonderi[i].alici.tel_no);
		cout<<"Al�c� adres: ";
		getline(cin,gonderi[i].alici.adres);
	}

    cout<<"--G�nderi Bilgileri--"<<endl;
    for(int i=0;i<2;i++){
     cout<<"--"<<i+1<<". G�nderi Bilgileri--"<<endl;
		cout<<"G�nderi no: "<<gonderi[i].gonderi_no<<endl;
		cout<<"G�nderi a��rl���: "<<gonderi[i].agirlik<<endl;	
		cout<<"G�nderi hacmi: "<<gonderi[i].hacim<<endl;
		cout<<"G�nderi garantisi: "<<gonderi[i].garanti<<endl;
		cout<<"G�nderi �creti: "<<gonderi[i].ucret<<endl;
		
	cout<<"**G�nderen Bilgileri**"<<endl;
		cout<<"G�nderen ad soyad: "<<gonderi[i].gonderen.ad_soyad<<endl;
		cout<<"G�nderen tel no: "<<gonderi[i].gonderen.tel_no<<endl;
		cout<<"G�nderen adres: "<<gonderi[i].gonderen.adres<<endl;
	
	cout<<"**Al�c� Bilgileri**"<<endl;
		cout<<"Al�c� ad soyad: "<<gonderi[i].alici.ad_soyad<<endl;
		cout<<"Al�c� tel no: "<<gonderi[i].alici.tel_no<<endl;
		cout<<"Al�c� adres: "<<gonderi[i].alici.adres<<endl;
	
	}
  
  cout<<"**Kurye Bilgileri**"<<endl;
        cout<<"Kurye ad soyad: "<<kurye.ad_soyad<<endl;
		cout<<"Kurye tel no: "<<kurye.tel_no<<endl;



	
	system("pause");
	return 0;
}
