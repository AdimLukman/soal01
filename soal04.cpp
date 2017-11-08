#include<iostream>

using namespace std;

int main(){
	int ta;
	cout<<"POSITIF,NEGATIF,NOL"<<endl;
	cout<<"==============================="<<endl;
	cout<<"Masukan angka = "; cin>> ta;
	cout<<"==============================="<<endl;
	if(ta>0){
		cout<<"Angka yang anda masukan POSITIF";
	}
	else if(ta<0){
		cout<<"Angka yang anda masukan NEGATIF";
	}
	else if(ta=0){
		cout<<"Angka yang anda masukan NOL";
	}
	else{
		cout<<"Angka yang anda masukan PECAHAN";
	}
}
