#include <iostream>
using namespace std; 

#define laki 66.5
#define garis "---------------"

int main ()
{
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
	
	hasil = laki + (lakikg * berat) + (lakicm * tinggi) - (lakiusia * usia);
	
	cout<<"Kebutuhan kalori anda adalah: "<<hasil<<" kkal";
	
	return 0;
}
