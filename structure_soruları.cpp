#include <iostream>
#include <math.h>
#include <string.h> 
using namespace std;



 /*1-Bir oto galerisi i�in "otomobil" ad�nda bir structure(yap�) tan�mlay�n�z. Structure �yeleri marka, model, y�l, yak�t('B','D','G','H'), km, fiyat olsun. 
 �yeler i�in uygun veri tiplerini se�in. Daha sonra otomobil yap�s�ndan binek, suv, ticari ad�nda de�i�kenler tan�mlay�n�z.
 De�i�kenlere veri giri�i ve verileri listeleme yap�n�z.*/
 
 
 struct Otomobil{
 	string marka;
 	string model;
 	int yil;
 	char yakit;
 	long km;
 	long fiyat;
 };
 
int main(){
 setlocale(LC_ALL,"Turkish");
 
  Otomobil binek,suv,ticari;
  
  
    cout<<"--Binek Ara� Bilgileri--\n";
    cout<<"Marka gir:";
	cin>>binek.marka;
	cout<<"Model gir:";
	cin>>binek.model;
	cout<<"Y�l gir:";
	cin>>binek.yil;
	cout<<"Yak�t gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>binek.yakit;  
    cout<<"Km gir:";
    cin>>binek.km;
	cout<<"Fiyat gir:";
	cin>>binek.fiyat; 
    
    cout<<"--Suv Ara� Bilgileri--\n";
    cout<<"Marka gir:";
	cin>>suv.marka;
	cout<<"Model gir:";
	cin>>suv.model;
	cout<<"Y�l gir:";
	cin>>suv.yil;
	cout<<"Yak�t gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>suv.yakit;  
    cout<<"Km gir:";
    cin>>suv.km;
	cout<<"Fiyat gir:";
	cin>>suv.fiyat;
	
	cout<<"--Ticari Ara� Bilgileri--\n" ;
    cout<<"Marka gir:";
	cin>>ticari.marka;
	cout<<"Model gir:";
	cin>>ticari.model;
	cout<<"Y�l gir:";
	cin>>ticari.yil;
	cout<<"Yak�t gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>ticari.yakit;  
    cout<<"Km gir:";
    cin>>ticari.km;
	cout<<"Fiyat gir:";
	cin>>ticari.fiyat; 
	cout<<endl;
	
	cout<<"--Binek ara� bilgileri--"<<endl;
	cout<<"Marka: "<<binek.marka<<endl;
    cout<<"Model: "<<binek.model<<endl;
    cout<<"Y�l: "<<binek.yil<<endl;   
	cout<<"Yak�t: "<<binek.yakit<<endl;
	cout<<"Km: "<<binek.km<<endl;
	cout<<"Fiyat: "<<binek.fiyat<<endl;		 	
	cout<<endl;
	
	cout<<"--Suv ara� bilgileri--"<<endl;
	cout<<"Marka: "<<suv.marka<<endl;
    cout<<"Model: "<<suv.model<<endl;
    cout<<"Y�l: "<<suv.yil<<endl;   
	cout<<"Yak�t: "<<suv.yakit<<endl;
	cout<<"Km: "<<suv.km<<endl;
	cout<<"Fiyat: "<<suv.fiyat<<endl;		 	
	cout<<endl;
	
	cout<<"--Ticari ara� bilgileri--"<<endl;
	cout<<"Marka: "<<ticari.marka<<endl;
    cout<<"Model: "<<ticari.model<<endl;
    cout<<"Y�l: "<<ticari.yil<<endl;   
	cout<<"Yak�t: "<<ticari.yakit<<endl;
	cout<<"Km: "<<ticari.km<<endl;
	cout<<"Fiyat: "<<ticari.fiyat<<endl;		 	
			
	
	
	
	
	
	
	system("pause");
 return 0;	
}
