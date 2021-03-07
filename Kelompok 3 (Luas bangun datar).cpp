#include<iostream>
using namespace std;
int main()
{
	float p,l,a,s,t,L,r;
	int menu;
	char ulang;
	
	do{
	cout << " ========================================= \n";
    cout << " ==             KELOMPOK 3              == "<<endl;
    cout << " ========================================= \n";
    cout << " == 1. CAHYO PRASETIAWAN                == \n";
    cout << " == 2. MURTAKI                          == \n";
    cout << " == 3. YUDA VIRGO NIKO                  == \n";
    cout << " ========================================= \n";
	cout << " ==          Menghitung Luas            ==\n" ;
	cout << "==========================================\n" ;
	cout << "1. PERSEGI\n" ;
	cout << "2. SEGITIGA \n" ;
	cout << "3. LINGKARAN \n" ;
	cout << "====================\n\n" ;
	cout <<"Jawab : "; cin >> menu ;
	cout << "\n\n**************************" <<endl;
	
	switch (menu)
	{
	case 1:
		cout << "MENGHITUNG LUAS PERSEGI \n\n" ;
		cout << "Masukkan Panjang Sisi Persegi : " ; 
		cin >> s;
		L = s*s;
		cout << "Luasnya adalah : " << L <<endl;
		break;
		
	case 2: 
		cout << "MENGHITUUNG LUAS SEGITIGA \n\n " ;
		cout << "Masukkan panjang alas segitiga : " ; 
		cin >> a;
		cout << "Masukkan tinggi segitiga : " ; 
		cin >> t;
		L = a*t/2;
		cout << "Luasnya adalah : " << L <<endl;
		break;
		
	case 3:
		cout << "MENGHITUNG LUAS LINGKARAN \n\n " ;
		cout << "Masukkan panjang jari jari lingkaran : " ; 
		cin >> r;
		L = 3.14 * r * r;
		cout << "Luasnya adalah : " << L <<endl;
		break;
		default :
			
			cout << "Pilihan anda tidak ada di sistem"<<endl;
			
		}
		
		
		cout << "\nKembali ke menu utama ? (y/n) ";
		cin >>  ulang; // untuk kembali ke dalam blok do-while
		
}
		while (ulang == 'y' || ulang == 'Y' );
	

		
			
}
