#include <iostream>

using namespace std ;

int main () {

  cout<<"BY MUHAMMAD DZIKRUL HAKAM\n";
  cout<<"NIM : 19051397001\n";
  cout<<"PRODI : D4 MANAJEMEN INFORMATIKA\n\n";
	system ("title MUHAMMAD DZIKRUL HAKAM") ;
	
	float a, b, hasil ;
	cout << "Masukkan angka pertama = " ;
	cin >> a ;
	cout << "Masukkan angka kedua   = " ;
	cin >> b ;
	
	hasil = a/b ;
	
	cout <<"Hasilnya adalah =" << hasil ;
	
	if (b==0) {
		cout << "tidak terdefinisi" ;
	}
	
	return 0 ;
}
