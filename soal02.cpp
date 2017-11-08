#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int x,y,z;
	char r;
	
	cout<<"PROGRAM HITUNG LUAS"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"P= Persegi panjang"<<endl;
	cout<<"S= Segitiga"<<endl;
	cout<<"Ketikan huruf |P/S| = "; cin>>r;
	cout<<endl;
	
	if(r=='P'|r=='P'){
	cout<<"Menghitung luas persegi panjang"<<endl;
	cout<<"\n";
	cout<<"----------------------------------------"<<endl;
	cout<<"Masukan nilai panjang\t = "; cin>>x;
	cout<<"Masukan nilai lebar\t = "; cin>>y;
	z=x*y;
	cout<<"Luas persegi panjang\t = "<<z<<" cm ";
	}
	else if(r=='S'||r=='s'){
	cout<<"Menghitung luas segitiga"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"\n";
	cout<<"Masukan nilaialas\t = "; cin>>x;
	cout<<"Masukan nilai tinggi\t = "; cin>>y;
	z=0,5*x*y;
	cout<<"Luas segitiga\t\t = "<<z<<" cm";
	}
	else{
		cout<<"inputtidak valid!!!";
	}
	return 0;
}
