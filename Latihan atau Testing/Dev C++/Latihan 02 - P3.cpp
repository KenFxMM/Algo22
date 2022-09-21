#include <iostream>
using namespace std;

#define enter ""
int main ()
{
	float tinggi = 0;
	float hasil=0;
	
	cout<<" Mencari berat badan ideal"<<endl;
	cout<<enter<<endl;
		
	cout<<" Masukkan tinggi badan (cm))= "; cin>>tinggi;
	cout<<enter<<endl;
	
	hasil = (tinggi - 100) - ((tinggi - 100) * 10/100);
	cout<<" Berat badan ideal anda adalah "<<hasil<<"kg";
	
	return 0;
}
