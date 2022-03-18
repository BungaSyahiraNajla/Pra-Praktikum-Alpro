#include <iostream>
#include<math.h>
using namespace std;

int main ()
{
  int a, b, c, d, e, f, g, h, i, j, k;
	cout<<"========================================"<<endl;
	cout<<"\tKALKULATOR SEDERHANA"<<endl;
	cout<<"========================================"<<endl;
	cout<<"\t1. Penambahan"<<endl;
	cout<<"\t2. Pengurangan"<<endl;
	cout<<"\t3. Pembagian"<<endl;
	cout<<"\t4. Perkalian"<<endl;
	cout<<"\t5. Pangkat"<<endl;
	cout<<"\t6. End"<<endl;
  	cout<<"Pilih angka	: ";
	cin>>i;
	   switch (i)
	  {
		   case 1 :
			 {
				 cout<<"Masukan angka 1 : "; cin>>a;
				 cout<<"Masukan angka 2 : "; cin>>b;
				 int x = a + b;
				 cout<<"Hasilnya adalah : "<< x <<endl;
			 }
		   case 2 :
			 {
				 cout<<"Masukan angka 1 : "; cin>>c;
				 cout<<"Masukan angka 2 : "; cin>>d;
				 int y = c - d;
				 cout<<"Hasilnya adalah : "<< y <<endl;
			 }
		   case 3 : 
			 {
				 cout<<"Masukan angka 1 : "; cin>>e;
				 cout<<"Masukan angka 2 : "; cin>>f;
				 int z = e/f;
				 cout<<"Hasilnya adalah : "; << z <<endl;
			 }
