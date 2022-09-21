#include <iostream>
using namespace std;

int main () 
{
	int uts,uas,nilai;
	
	cout<<"Masukkan nilai UTS: "; cin>>uts;
	cout<<"Masukkan nilai UAS: "; cin>>uas;
	nilai = (uts+uas) / 2;
	cout<<"-----------------"<<endl;
	cout<<"Nilai anda : "<<nilai<<endl;
	(nilai >= 60) ? cout<<"Selamat telah lulus":
					cout<<"Maaf, tidak lulus";
}
