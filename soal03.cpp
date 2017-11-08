#include<iostream>

using namespace std;
int main(){
	double jk,lb,jl,jtot;
	long gtot,gaber;
	
	cout<<"PROGRAM HITUNG GAJI"<<endl;
	cout<<"=================================="<<endl;
	cout<<"Lama jam kerja perminggu = "; cin>>jk;
	cout<<"=================================="<<endl;
	if (jk>40){
		cout<<"Gaji pokok\t\t = Rp 1000.000"<<endl;
		cout<<"Jam kerja standard\t = 40 jam"<<endl;
		lb=jk-40;
		cout<<"Lembur\t\t\t = "<<jtot<<" Jam"<<endl;
		jl=lb*1.5;
		jtot=40+jl;
		cout<<"Total jam kerja\t\t = "<<jtot<<"jam"<<endl;
		gtot=1000000+(jl*500000);
		cout<<"Total gaji\t\t = "<<"Rp"<<gtot<<endl;
		cout<<"Potongan\t\t =15%"<<endl;
		gaber=gtot-(1.5*gtot);
		cout<<"Gaji bersih\t\t = "<<"Rp"<<gaber;
	}
	
	else if (jk<=40){
		cout<<"Gaji pokok\t\t = Rp 1000000"<<endl;
		cout<<"Jam kerja standard\t = 40 jam"<<endl;
		lb=0;
		cout<<"Lembur\t\t\t = "<<lb<<"jam"<<endl;
		jl=lb*1.5;
		jtot=40+jl;
		cout<<"Total jam kerja\t\t = "<<jtot<<"jam"<<endl;
		gtot=1000000+(jl*500000);
		cout<<"Total gaji\t\t = "<<"Rp"<<gtot<<endl;
		cout<<"Potongan\t\t = 15%"<<endl;
		gaber=gtot-(0.15*gtot);
		cout<<"Gaji bersih\t\t ="<<"Rp"<<gaber;
	}
	return 0;
}
