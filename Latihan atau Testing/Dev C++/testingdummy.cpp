#include <iostream>
using namespace std;

#define garis "-------------"
#define laki 66.5

int main () 
{
	string nama;
	int umur;
	
	cout<<"Masukkan nama: "; cin>>nama;
	cout<<"Masukkan umur: "; cin>>umur;
	cout<<"-----------------"<<endl;
	cout<<"Terima kasih "<<nama<<endl;
	cout<<"Umur anda : "<<umur<<endl;
	(umur > 17) ? cout<<"Anda Dewasa":
					cout<<"Anda Anak"<<endl;
					
	cout<<"Selamat datang "<<nama<<endl;
	
	const double lakikg = 13.75;
	const double lakicm = 5.003;
	const double lakiusia = 6.75;
	
	double hasil,berat,tinggi,usia;
	
	cout<<" Menghitung kebutuhan kalori"<<endl;
	cout<<garis<<endl;
	
	cout<<" Masukkan berat badan (kg) : "; cin>>berat;cout<<endl;
	
	cout<<" Masukkan tinggi badan (cm) : "; cin>>tinggi;cout<<endl;
	
	cout<<" Masukkan usia : "; cin>>usia;
	cout<<garis<<endl;
	
	hasil = laki + (lakikg * berat) + (lakicm * tinggi) - (lakiusia * usia) / 1000;
	
	cout<<"Kebutuhan kalori anda adalah: "<<hasil<<" kkal"<<endl;
	cout<<garis<<endl;
	
	cout<<"Saatnya menghitung umur anda"<<endl;
	
	string a;
	int b;
	
	cout<<"Masukkan nama anda : "; cin>>a;
	cout<<"Masukkan umur anda : "; cin>>b;
	cout<<garis<<endl;
	
	cout<<"Nama anda : "<<a; cout<<" Umur anda : "<<b<<endl;
	cout<<"terima kasih "<<a<<endl;
	
	return 0;
}
