#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	float phi=3.14,p,l,t,s,r,T,rk,Tk,volume;
	int menu;
	char ulang;
	
	do{
	cout<<" ========================================================================== \n";
	cout<<" ==                           Kelompok 3                                 == \n";
	cout<<" ========================================================================== \n";
	cout<<" ==                            Anggota                                   == \n";
	cout<<" == 1. CAHYO PRASETIAWAN                                                 == \n";
	cout<<" == 2. MURTAKI                                                           == \n";
	cout<<" == 3. YUDA VIRGO NIKO                                                   == \n";
	cout<<" ========================================================================== \n";
	cout<<" ========================================================================== \n";
	cout<<" ==                 MENGHITUNG VOLUME BANGUN RUANG                       == \n";
	cout<<" ========================================================================== \n";
	cout<<" ==  1. BALOK                                                            ==" <<endl;
	cout<<" ==  2. KUBUS                                                            ==" <<endl;
	cout<<" ==  3. TABUNG                                                           ==" <<endl;
	cout<<" ==  4. KERUCUT                                                          ==" <<endl;
	cout<<" ==========================================================================" <<endl;
	cout<<" ==  MASUKKAN PILIHAN ANDA : ";
	cin>>menu;
	
	switch(menu)
	{
		case 1:
		{
		
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME BALOK                        ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI PANJANG : ";cin >>p;
			cout<<" == MASUKKAN NILAI LEBAR   : ";cin >>l;
			cout<<" == MASUKKAN NILAI TINGGI  : ";cin >>t;
			volume=p*l*t;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME BALOK ADALAH : " <<volume <<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
			case 2:
		{
	
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME KUBUS                        ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI SISI : ";cin >>s;
			volume=s*s*s;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME KUBUS ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
			case 3:
	    {
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME TABUNG                        ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI JARI-JARI ALAS : ";cin >>r;
			cout<<" == MASUKKAN NILAI TINGGI         : ";cin >>T;
			volume=phi*r*r*T;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME TABUNG ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;	
	    }
		   case 4:
		{
			cout<<" ================================================================== \n";
			cout<<" ==               MENGHITUNG VOLUME KERUCUT                      ==" <<endl;
			cout<<" ==================================================================\n";
			cout<<" == MASUKKAN NILAI JARI-JARI ALAS : ";cin >>rk;
			cout<<" == MASUKKAN NILAI TINGGI         : ";cin >>Tk;
			volume=phi*rk*rk*Tk/3;
			cout<<" ================================================================== \n";
			cout<<"             VOLUME TABUNG ADALAH : " <<volume<<endl;
			cout<<" ================================================================== \n";
			break;
	    }
				default :
			cout<<" ================================================================== \n";
			cout<<" ==              Pilihan anda tidak ada di sistem                =="<<endl;
			cout<<" ================================================================== \n";
		}
		cout<<" ANDA MAU KEMBALI KE MENU AWAL LAGI [y/n]? ";
        cin>> ulang;


	}
	while(ulang == 'y' || ulang == 'Y'); 
}

