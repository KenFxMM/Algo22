#include <iostream>
using namespace std;

int main () {
	double a, t, luas;
	
	cout<<"Masukkan Alas (cm) : "; cin>>a;
	cout<<"Masukkan Tinggi (cm) : "; cin>>t;
	luas = (a*t) / 2;
	cout<<"------------------------"<<endl;
	cout<<"Luas Segitiga adalah "<<luas<<" cm";
	
	return 0;
	
}
