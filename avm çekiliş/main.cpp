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

	
	
	

	cout<<     "                              TARSU AVM YILBA�I �EK�L�� S�STEM�NE HO�GELD�N�Z"<<endl;
	cout<<endl;
	cout<<"�ekili�e Kat�lmak �stiyorsan�z 'evet' Kat�lmamak istiyorsan�z 'hay�r ' Yaz�n�z"<<endl;
	cout<<endl;
	cin>>onay1;
	if(onay1=="evet"){
		cout<<endl;
		cout<<"�ekili�e Kat�lmay� Onaylad�n�z ...Sonraki Ad�ma Y�nelendiriliyorsunuz..."<<endl;
		cout<<endl;
		cout<<"�ekili�i Kazanman�z Durumunda Size Ula�abilmemiz ��in Baz� Ki�isel Bilgilerinizi almam�z gerek.."<<endl;
		cout<<endl;
		cout<<"Bu Ki�isel Bilgilerinizi Bizimle Payla�mak istemiyorsan�z 'iptal' Payla�mak istiyorsan�z 'onay' yaz�n�z"<<endl;
		cin>>onay2;
		if(onay2=="onay"){
			cout<<"Ki�isel Bilgilerinizi Payla�may� Onaylad�n�z... L�tfen Ki�isel Bilgilerinizi S�ras�yle Giri� Sa�lay�n�z..."<<endl;
			cout<<endl;
			cout<<"L�tfen �sminizi Giriniz..."<<endl;
			cin>>isim;
			cout<<endl;
			cout<<"L�tfen Soyisminizi Giriniz..."<<endl;
			cin>>soy;
			cout<<endl;
			cout<<"L�tfen Tc Kimlik Numaran�z� Giriniz"<<endl;
			cin>>tc;
			cout<<endl;
			cout<<"                      �sminiz : "<<isim<< " Soyisminiz : "<<soy<<"  Tc Kimlik Nonuz : "<<tc<<endl;
			cout<<endl;
			cout<<" Bu Bilgilerinin Do�ru Oldu�unu Onayl�yormusunuz ?..(onayl�yorsan�z 'onay ' �ptal etmek istiyorsan�z 'iptal ' yaz�n�z)"<<endl;
			cin>>onay3;
			cout<<endl;
			if(onay3=="onay"){
				cout<<"Ki�isel Bilgilerinizin Do�rulu�unu onaylad�n�z..S�radaki Ad�ma Y�nelendiriliyorsunuz..."<<endl;
				cout<<endl;
				cout<<"�ekili�imizin Kurallar� ��yledir ;"<<endl;
				cout<<endl;
				cout<<" 1. Her 150 Tl Al��veri�inize 1 �ekili� Hakk� Kazan�rs�n�z.."<<endl;
				cout<<endl;
				cout<<" 2. �ekili�ten Kazand���n�z �r�nlerin De�i�im Veya �adesi Bulunmamaktad�r.."<<endl;
				cout<<endl;
				cout<<"�lerlemek i�in T�klay�n�z.."<<endl;
				getch();
				cout<<"F���N�Z�N SA� �ST�NDEK� SAYILI BARKODU G�R�N�Z"<<endl;
cin>>b1;
if(b1==barkod1){
	cout<<"Ba�ar�l� Barkod Girilimi .. "<<barkod1<<" Numaral� fi�inizde "<<tbarkod1<<" TL Lik Al��veri� G�r�nmektedir.."<<endl;
	cout<<endl;
	cout<<"�ekili� Hak Miktar�n�z Hesaplan�yor..."<<endl;
	cout<<endl;
	c1=tbarkod1/150;
	cout<<c1<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 3; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"�ekili� Hakk�nz� Kullanmak ��in T�klan�y�nz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WA�KK� MA�ASINDAN %15 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MA�ZASINDAN %25 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAV� MA�ZASINDAN 2. �R�NE NET %50 �ND�R�M KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. P�ZAYA %30 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLAS�C'DEN TAKIM ELB�SELERDE %40 a VARAN �ND�R�M KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER K�NGDEN 1 B�GMAC ALANA 2. BEDAVA �ND�R�M� KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KI�LIK BOTLARDA NET %50 �ND�R�M KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
			else if(b1==barkod2){
	cout<<"Ba�ar�l� Barkod Girilimi .. "<<barkod2<<" Numaral� fi�inizde "<<tbarkod2<<" TL Lik Al��veri� G�r�nmektedir.."<<endl;
	cout<<endl;
	cout<<"�ekili� Hak Miktar�n�z Hesaplan�yor..."<<endl;
	cout<<endl;
	c2=tbarkod2/150;
	cout<<c2<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 2; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"�ekili� Hakk�nz� Kullanmak ��in T�klan�y�nz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WA�KK� MA�ASINDAN %15 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MA�ZASINDAN %25 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAV� MA�ZASINDAN 2. �R�NE NET %50 �ND�R�M KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. P�ZAYA %30 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLAS�C'DEN TAKIM ELB�SELERDE %40 a VARAN �ND�R�M KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER K�NGDEN 1 B�GMAC ALANA 2. BEDAVA �ND�R�M� KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KI�LIK BOTLARDA NET %50 �ND�R�M KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod3){
	cout<<"Ba�ar�l� Barkod Girilimi .. "<<barkod3<<" Numaral� fi�inizde "<<tbarkod3<<" TL Lik Al��veri� G�r�nmektedir.."<<endl;
	cout<<endl;
	cout<<"�ekili� Hak Miktar�n�z Hesaplan�yor..."<<endl;
	cout<<endl;
	c3=tbarkod3/150;
	cout<<c3<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 1; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"�ekili� Hakk�nz� Kullanmak ��in T�klan�y�nz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WA�KK� MA�ASINDAN %15 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MA�ZASINDAN %25 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAV� MA�ZASINDAN 2. �R�NE NET %50 �ND�R�M KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. P�ZAYA %30 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLAS�C'DEN TAKIM ELB�SELERDE %40 a VARAN �ND�R�M KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER K�NGDEN 1 B�GMAC ALANA 2. BEDAVA �ND�R�M� KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KI�LIK BOTLARDA NET %50 �ND�R�M KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod4){
	cout<<"Ba�ar�l� Barkod Girilimi .. "<<barkod4<<" Numaral� fi�inizde "<<tbarkod4<<" TL Lik Al��veri� G�r�nmektedir.."<<endl;
	cout<<endl;
	cout<<"�ekili� Hak Miktar�n�z Hesaplan�yor..."<<endl;
	cout<<endl;
	c4=tbarkod4/150;
	cout<<c4<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 4; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"�ekili� Hakk�nz� Kullanmak ��in T�klan�y�nz..\a."<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WA�KK� MA�ASINDAN %15 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MA�ZASINDAN %25 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAV� MA�ZASINDAN 2. �R�NE NET %50 �ND�R�M KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. P�ZAYA %30 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLAS�C'DEN TAKIM ELB�SELERDE %40 a VARAN �ND�R�M KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER K�NGDEN 1 B�GMAC ALANA 2. BEDAVA �ND�R�M� KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KI�LIK BOTLARDA NET %50 �ND�R�M KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
				else if(b1==barkod5){
	cout<<"Ba�ar�l� Barkod Girilimi .. "<<barkod5<<" Numaral� fi�inizde "<<tbarkod5<<" TL Lik Al��veri� G�r�nmektedir.."<<endl;
	cout<<endl;
	cout<<"�ekili� Hak Miktar�n�z Hesaplan�yor..."<<endl;
	cout<<endl;
	c5=tbarkod5/150;
	cout<<c5<<" Tane �ekili� Hakk� Kazand�n�z..."<<endl;
	
	
	cout<<endl;
	for (int i = 0; i < 5; i++){
			srand(time(NULL));
	cek=+rand()%7;
	
	
	cout<<"�ekili� Hakk�nz� Kullanmak ��in T�klan�y�nz...\a"<<endl;
	cout<<endl;
	getch();
	
	switch(cek){
		case 1:
			cout<<"LC WA�KK� MA�ASINDAN %15 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 2:
			cout<<"DEFACTO MA�ZASINDAN %25 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 3:
			cout<<"MAV� MA�ZASINDAN 2. �R�NE NET %50 �ND�R�M KAZANDINIZ..."<<endl;
			break;
			case 4:
			cout<<"SBARO'DAN 2. P�ZAYA %30 �ND�R�M KAZANDINIZ...."<<endl;
			break;
			case 5:
			cout<<"ALTIN YILDIZ CLAS�C'DEN TAKIM ELB�SELERDE %40 a VARAN �ND�R�M KAZANDINIZ....."<<endl;
			break;
			case 6:
			cout<<"BURGER K�NGDEN 1 B�GMAC ALANA 2. BEDAVA �ND�R�M� KAZANDINIZ....."<<endl;
			break;
			case 7:
			cout<<"FLO'Dan  KI�LIK BOTLARDA NET %50 �ND�R�M KAZANDINIZ...."<<endl;
			break;
		
	
}
}
				
				
			}
			else if(onay3=="iptal"){
				cout<<"Ki�isel Bilgilerinizin Do�rulu�u Sizin taraf�n�zdan �ptal Edilmi�tir...L�tfen Tekrar Kay�t Olu�turunuz.."<<endl;
			}
			else{
					cout<<"L�tfen Ge�erli Bir komut Giriniz (onay-iptal)"<<endl;
				
			}
			
			
		}
		else if(onay2=="iptal"){
			cout<<"Ki�isel Bilgilerinizi Bizimle Payla�mak �stemedi�inizden Dolay� �ekili�e Kat�lamazs�n�z ...�zg�n�z.."<<endl;
		}
		else{
			cout<<"L�tfen Ge�erli Bir komut Giriniz (onay-iptal)"<<endl;
		}
	}
	else if(onay1=="hay�r"){
		cout<<"�eki�ile Kat�lma Sizin Taraf�n�z�dan �ptal Edilmi�tir."<<endl;
		cout<<endl;
	}
	else{
		cout<<"L�tfen Ge�erli Bir Komut Giriniz (evet-hay�r)"<<endl;
	}

}
	return 0;
}
