#include<iostream>
using namespace std;
int main(){
	int X,Y,Z;
	cout<<"Masukan X\t\t = "; cin>>X;
	cout<<"Masukan Y\t\t = "; cin>>Y;
	if(X<Y){
		Z=Y-X;
	}
	else{
		Z=X-Y;
	}
	cout<<"Hasil Pengurangan \t = "<<Z;
}
