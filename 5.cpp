#include <iostream>
using namespace std;

int main ( ) {

	  cout<<"BY MUHAMMAD DZIKRUL HAKAM\n";
  cout<<"NIM : 19051397001\n";
  cout<<"PRODI : D4 MANAJEMEN INFORMATIKA\n\n";
	system ("MUHAMMAD DZIKRUL HAKAM") ;
 
	cout << "=============================================\n " ;
	cout << "                VAN'S MART'                 \n " ;
	cout << "=============================================\n " ;
	
	float  tot ;
	
	cout << "Masukkan Total Belanjaan Anda = " ;
	cin >> tot ;
	
	if ( tot >= 100000 ) {
		cout << "Selamat Anda Mendapatkan Hadiah" ;
	}
	
	else if ( tot <= 100000 ) {
		cout << "Terimakasih telah berbelanja" ;
	}
	
	return 0;
}
