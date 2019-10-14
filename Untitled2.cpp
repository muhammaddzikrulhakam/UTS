#include <iostream>

using namespace std ;

//SOAL : BERAPAKAH HARGA YANG HARUS DI BAYAR NOVAN APABILA DIA MEMBELI "NASI PECEL LELE" ?

int main() {
	ulang:
	system("cls");


	float a, b, c ;
  cout<<"BY MUHAMMAD DZIKRUL HAKAM\n";
  cout<<"NIM : 19051397001\n";
  cout<<"PRODI : D4 MANAJEMEN INFORMATIKA\n\n";
	cout << "MENU MAKANAN\n" ;
	cout << "1. NASI RAWON\n2. NASI LODEH\n3. NASI PENYETAN \n\n" ;
	cout << "Pilihan MAKANAN = " ;
	cin >> a ;

	cout << "\n\n " ;
	cout << "Ukuran Menu\n1. Paket Small\n2. Paket Medium\n3. Paket Large\n " ;
	cout << "Pilihan Minuman =" ;
	cin >> b ;

	if (a==1) {
		if (b==a) {
			cout <<"Harga = 21.000" ;
		}

		else if (b==b) {
			cout <<"Harga = 25.000" ;
		}

		else if (b==c) {
			cout <<"Harga = 30.000" ;
		}
	
	}

	else if (a==2) {
		if (b==a) {
			cout <<"Harga = 21.000" ;
		}

		else if (b==b) {
			cout <<"Harga = 25.000" ;
		}

		else if (b==c) {
			cout <<"Harga = 30.000" ;
		}
	cout<<"\n";
		system("pause");
		goto ulang;	
	}

	return 0 ;
	
}
