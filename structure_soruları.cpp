#include <iostream>
#include <math.h>
#include <string.h> 
using namespace std;



 /*1-Bir oto galerisi için "otomobil" adýnda bir structure(yapý) tanýmlayýnýz. Structure üyeleri marka, model, yýl, yakýt('B','D','G','H'), km, fiyat olsun. 
 Üyeler için uygun veri tiplerini seçin. Daha sonra otomobil yapýsýndan binek, suv, ticari adýnda deðiþkenler tanýmlayýnýz.
 Deðiþkenlere veri giriþi ve verileri listeleme yapýnýz.*/
 
 
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
  
  
    cout<<"--Binek Araç Bilgileri--\n";
    cout<<"Marka gir:";
	cin>>binek.marka;
	cout<<"Model gir:";
	cin>>binek.model;
	cout<<"Yýl gir:";
	cin>>binek.yil;
	cout<<"Yakýt gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>binek.yakit;  
    cout<<"Km gir:";
    cin>>binek.km;
	cout<<"Fiyat gir:";
	cin>>binek.fiyat; 
    
    cout<<"--Suv Araç Bilgileri--\n";
    cout<<"Marka gir:";
	cin>>suv.marka;
	cout<<"Model gir:";
	cin>>suv.model;
	cout<<"Yýl gir:";
	cin>>suv.yil;
	cout<<"Yakýt gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>suv.yakit;  
    cout<<"Km gir:";
    cin>>suv.km;
	cout<<"Fiyat gir:";
	cin>>suv.fiyat;
	
	cout<<"--Ticari Araç Bilgileri--\n" ;
    cout<<"Marka gir:";
	cin>>ticari.marka;
	cout<<"Model gir:";
	cin>>ticari.model;
	cout<<"Yýl gir:";
	cin>>ticari.yil;
	cout<<"Yakýt gir (benzin=B,dizel=D,gaz=G,hibrit=H:";
    cin>>ticari.yakit;  
    cout<<"Km gir:";
    cin>>ticari.km;
	cout<<"Fiyat gir:";
	cin>>ticari.fiyat; 
	cout<<endl;
	
	cout<<"--Binek araç bilgileri--"<<endl;
	cout<<"Marka: "<<binek.marka<<endl;
    cout<<"Model: "<<binek.model<<endl;
    cout<<"Yýl: "<<binek.yil<<endl;   
	cout<<"Yakýt: "<<binek.yakit<<endl;
	cout<<"Km: "<<binek.km<<endl;
	cout<<"Fiyat: "<<binek.fiyat<<endl;		 	
	cout<<endl;
	
	cout<<"--Suv araç bilgileri--"<<endl;
	cout<<"Marka: "<<suv.marka<<endl;
    cout<<"Model: "<<suv.model<<endl;
    cout<<"Yýl: "<<suv.yil<<endl;   
	cout<<"Yakýt: "<<suv.yakit<<endl;
	cout<<"Km: "<<suv.km<<endl;
	cout<<"Fiyat: "<<suv.fiyat<<endl;		 	
	cout<<endl;
	
	cout<<"--Ticari araç bilgileri--"<<endl;
	cout<<"Marka: "<<ticari.marka<<endl;
    cout<<"Model: "<<ticari.model<<endl;
    cout<<"Yýl: "<<ticari.yil<<endl;   
	cout<<"Yakýt: "<<ticari.yakit<<endl;
	cout<<"Km: "<<ticari.km<<endl;
	cout<<"Fiyat: "<<ticari.fiyat<<endl;		 	
			
	
	
	
	
	
	
	system("pause");
 return 0;	
}
