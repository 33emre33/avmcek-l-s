#include <iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
		int cek;

	string onay1,onay2,onay3,isim,soy;
	long tc,barkod1,barkod2,barkod3,barkod4,barkod5,tbarkod1,tbarkod2,tbarkod3,tbarkod4,tbarkod5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5;
	barkod1=11111;
	barkod2=22222;
	barkod3=33333;
	barkod4=44444;
	barkod5=55555;
	tbarkod1=450;
	tbarkod2=300;
	tbarkod3=150;
	tbarkod4=600;
	tbarkod5=750;

	
	
	

	cout<<     "                              TARSU AVM YILBAÞI ÇEKÝLÞÝ SÝSTEMÝNE HOÞGELDÝNÝZ"<<endl;
	cout<<endl;
	cout<<"Çekiliþe Katýlmak Ýstiyorsanýz 'evet' Katýlmamak istiyorsanýz 'hayýr ' Yazýnýz"<<endl;
	cout<<endl;
	cin>>onay1;
	if(onay1=="evet"){
		cout<<endl;
		cout<<"Çekiliþe Katýlmayý Onayladýnýz ...Sonraki Adýma Yönelendiriliyorsunuz..."<<endl;
		cout<<endl;
		cout<<"Çekiliþi Kazanmanýz Durumunda Size Ulaþabilmemiz Ýçin Bazý Kiþisel Bilgilerinizi almamýz gerek.."<<endl;
		cout<<endl;
		cout<<"Bu Kiþisel Bilgilerinizi Bizimle Paylaþmak istemiyorsanýz 'iptal' Paylaþmak istiyorsanýz 'onay' yazýnýz"<<endl;
		cin>>onay2;
		if(onay2=="onay"){
			cout<<"Kiþisel Bilgilerinizi Paylaþmayý Onayladýnýz... Lütfen Kiþisel Bilgilerinizi Sýrasýyle Giriþ Saðlayýnýz..."<<endl;
			cout<<endl;
			cout<<"Lütfen Ýsminizi Giriniz..."<<endl;
			cin>>isim;
			cout<<endl;
			cout<<"Lütfen Soyisminizi Giriniz..."<<endl;
			cin>>soy;
			cout<<endl;
			cout<<"Lütfen Tc Kimlik Numaranýzý Giriniz"<<endl;
			cin>>tc;
			cout<<endl;
			cout<<"                      Ýsminiz : "<<isim<< " Soyisminiz : "<<soy<<"  Tc Kimlik Nonuz : "<<tc<<endl;
			cout<<endl;
			cout<<" Bu Bilgilerinin Doðru Olduðunu Onaylýyormusunuz ?..(onaylýyorsanýz 'onay ' Ýptal etmek istiyorsanýz 'iptal ' yazýnýz)"<<endl;
			cin>>onay3;
			cout<<endl;
			if(onay3=="onay"){
				cout<<"Kiþisel Bilgilerinizin Doðruluðunu onayladýnýz..Sýradaki Adýma Yönelendiriliyorsunuz..."<<endl;
				cout<<endl;
				cout<<"Çekiliþimizin Kurallarý Þöyledir ;"<<endl;
				cout<<endl;
				cout<<" 1. Her 150 Tl Alýþveriþinize 1 Çekiliþ Hakký Kazanýrsýnýz.."<<endl;
				cout<<endl;
				cout<<" 2. Çekiliþten Kazandýðýnýz Ürünlerin Deðiþim Veya Ýadesi Bulunmamaktadýr.."<<endl;
				cout<<endl;
				cout<<"Ýlerlemek için Týklayýnýz.."<<endl;
				getch();
				cout<<"FÝÞÝNÝZÝN SAÐ ÜSTÜNDEKÝ SAYILI BARKODU GÝRÝNÝZ"<<endl;
cin>>b1;
if(b1==barkod1){
	cout<<"Baþarýlý Barkod Girilimi .. "<<barkod1<<" Numaralý fiþinizde "<<tbarkod1<<" TL Lik Alýþveriþ Görünmektedir.."<<endl;
	cout<<endl;
	cout<<"Çekiliþ Hak Miktarýnýz Hesaplanýyor..."<<endl;
	cout<<endl;
	c1=tbarkod1/150;
	cout<<c1<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 3; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"Çekiliþ Hakkýnzý Kullanmak Ýçin Týklanýyýnz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WAÝKKÝ MAÐASINDAN %15 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MAÐZASINDAN %25 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAVÝ MAÐZASINDAN 2. ÜRÜNE NET %50 ÝNDÝRÝM KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. PÝZAYA %30 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLASÝC'DEN TAKIM ELBÝSELERDE %40 a VARAN ÝNDÝRÝM KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER KÝNGDEN 1 BÝGMAC ALANA 2. BEDAVA ÝNDÝRÝMÝ KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KIÞLIK BOTLARDA NET %50 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
			else if(b1==barkod2){
	cout<<"Baþarýlý Barkod Girilimi .. "<<barkod2<<" Numaralý fiþinizde "<<tbarkod2<<" TL Lik Alýþveriþ Görünmektedir.."<<endl;
	cout<<endl;
	cout<<"Çekiliþ Hak Miktarýnýz Hesaplanýyor..."<<endl;
	cout<<endl;
	c2=tbarkod2/150;
	cout<<c2<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 2; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"Çekiliþ Hakkýnzý Kullanmak Ýçin Týklanýyýnz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WAÝKKÝ MAÐASINDAN %15 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MAÐZASINDAN %25 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAVÝ MAÐZASINDAN 2. ÜRÜNE NET %50 ÝNDÝRÝM KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. PÝZAYA %30 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLASÝC'DEN TAKIM ELBÝSELERDE %40 a VARAN ÝNDÝRÝM KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER KÝNGDEN 1 BÝGMAC ALANA 2. BEDAVA ÝNDÝRÝMÝ KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KIÞLIK BOTLARDA NET %50 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod3){
	cout<<"Baþarýlý Barkod Girilimi .. "<<barkod3<<" Numaralý fiþinizde "<<tbarkod3<<" TL Lik Alýþveriþ Görünmektedir.."<<endl;
	cout<<endl;
	cout<<"Çekiliþ Hak Miktarýnýz Hesaplanýyor..."<<endl;
	cout<<endl;
	c3=tbarkod3/150;
	cout<<c3<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 1; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"Çekiliþ Hakkýnzý Kullanmak Ýçin Týklanýyýnz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WAÝKKÝ MAÐASINDAN %15 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MAÐZASINDAN %25 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAVÝ MAÐZASINDAN 2. ÜRÜNE NET %50 ÝNDÝRÝM KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. PÝZAYA %30 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLASÝC'DEN TAKIM ELBÝSELERDE %40 a VARAN ÝNDÝRÝM KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER KÝNGDEN 1 BÝGMAC ALANA 2. BEDAVA ÝNDÝRÝMÝ KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KIÞLIK BOTLARDA NET %50 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod4){
	cout<<"Baþarýlý Barkod Girilimi .. "<<barkod4<<" Numaralý fiþinizde "<<tbarkod4<<" TL Lik Alýþveriþ Görünmektedir.."<<endl;
	cout<<endl;
	cout<<"Çekiliþ Hak Miktarýnýz Hesaplanýyor..."<<endl;
	cout<<endl;
	c4=tbarkod4/150;
	cout<<c4<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 4; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"Çekiliþ Hakkýnzý Kullanmak Ýçin Týklanýyýnz..\a."<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WAÝKKÝ MAÐASINDAN %15 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MAÐZASINDAN %25 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAVÝ MAÐZASINDAN 2. ÜRÜNE NET %50 ÝNDÝRÝM KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. PÝZAYA %30 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLASÝC'DEN TAKIM ELBÝSELERDE %40 a VARAN ÝNDÝRÝM KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER KÝNGDEN 1 BÝGMAC ALANA 2. BEDAVA ÝNDÝRÝMÝ KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KIÞLIK BOTLARDA NET %50 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod5){
	cout<<"Baþarýlý Barkod Girilimi .. "<<barkod5<<" Numaralý fiþinizde "<<tbarkod5<<" TL Lik Alýþveriþ Görünmektedir.."<<endl;
	cout<<endl;
	cout<<"Çekiliþ Hak Miktarýnýz Hesaplanýyor..."<<endl;
	cout<<endl;
	c5=tbarkod5/150;
	cout<<c5<<" Tane Çekiliþ Hakký Kazandýnýz..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 5; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"Çekiliþ Hakkýnzý Kullanmak Ýçin Týklanýyýnz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WAÝKKÝ MAÐASINDAN %15 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MAÐZASINDAN %25 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAVÝ MAÐZASINDAN 2. ÜRÜNE NET %50 ÝNDÝRÝM KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. PÝZAYA %30 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLASÝC'DEN TAKIM ELBÝSELERDE %40 a VARAN ÝNDÝRÝM KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER KÝNGDEN 1 BÝGMAC ALANA 2. BEDAVA ÝNDÝRÝMÝ KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KIÞLIK BOTLARDA NET %50 ÝNDÝRÝM KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
			else if(onay3=="iptal"){
				cout<<"Kiþisel Bilgilerinizin Doðruluðu Sizin tarafýnýzdan Ýptal Edilmiþtir...Lütfen Tekrar Kayýt Oluþturunuz.."<<endl;
			}
			else{
					cout<<"Lütfen Geçerli Bir komut Giriniz (onay-iptal)"<<endl;
				
			}
			
			
		}
		else if(onay2=="iptal"){
			cout<<"Kiþisel Bilgilerinizi Bizimle Paylaþmak Ýstemediðinizden Dolayý Çekiliþe Katýlamazsýnýz ...Üzgünüz.."<<endl;
		}
		else{
			cout<<"Lütfen Geçerli Bir komut Giriniz (onay-iptal)"<<endl;
		}
	}
	else if(onay1=="hayýr"){
		cout<<"Çekiþile Katýlma Sizin Tarafýnýzýdan Ýptal Edilmiþtir."<<endl;
		cout<<endl;
	}
	else{
		cout<<"Lütfen Geçerli Bir Komut Giriniz (evet-hayýr)"<<endl;
	}

}
	return 0;
}
