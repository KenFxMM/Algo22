#include <iostream>
using namespace std; 

#define garis "--------"

int main ()
{
	const double pi = 3.14;
	
	double vol,r,tinggi;
	
	cout<<"Program mencari volume kerucut"<<endl;
	cout<<garis<<endl;
	
	cout<<"Masukkan jari-jari (cm): "; cin>>r;
	
	cout<<"Masukkan tinggi (cm): "; cin>>tinggi;
	cout<<garis<<endl;
	
	vol = (pi * r * r * tinggi) / 3;
	
	cout<<"Volume kerucut adalah: "<<vol;
	
	return 0;
}

