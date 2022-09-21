#include <iostream>
using namespace std;

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
					cout<<"Anda Anak";
}
