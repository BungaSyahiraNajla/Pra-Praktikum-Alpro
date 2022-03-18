#include <iostream>
#include<math.h>
using namespace std;

int main ()
{
  int a, b, c, d, e, f, g, h, i, j, k;
	cout<<"========================================"<<endl;
	cout<<"\tPRROGRAM KALKULATOR SEDERHANA"<<endl;
	cout<<"========================================"<<endl;
	cout<<"\t1. Penambahan"<<endl;
	cout<<"\t2. Pengurangan"<<endl;
	cout<<"\t3. Pembagian"<<endl;
	cout<<"\t4. Perkalian"<<endl;
	cout<<"\t5. Pangkat"<<endl;
	cout<<"\t6. End"<<endl;
	cout<<"========================================"<<endl;
  	cout<<"Pilih angka	: ";
	cin>>i;
	   switch (i)
	  	{
		   case 1 :
			 {
				 cout<<"Masukan Bilangan Pertama : "; cin>>a;
				 cout<<"Masukan Bilangan Kedua   : "; cin>>b;
				 int x = a + b;
				 cout<<"Hasilnya adalah          : "<< x <<endl;
				 break;
			 }
		   case 2 :
			 {
				 cout<<"Masukan Bilangan Pertama : "; cin>>c;
				 cout<<"Masukan Bilangan Kedua   : "; cin>>d;
				 int y = c - d;
				 cout<<"Hasilnya adalah          : "<< y <<endl;
				 break;
			 }
		   case 3 : 
			 {
				 cout<<"Masukan Bilangan Pertama : "; cin>>e;
				 cout<<"Masukan Bilangan Kedua   : "; cin>>f;
				 int z = e/f;
				 cout<<"Hasilnya adalah          : " << z <<endl;
				 break;
			 }
		   case 4 : 
			 {
			   	cout<<"Masukkan Bilangan Pertama : "; cin>>g;
			   	cout<<"Masukkan Bilangan Kedua   : "; cin>>h;
			   	int r = g * h;
			   	cout<<"Hasilnya adalah           :  "<< r <<endl;
				break;
	   		}
		   case 5 :
			{
				cout<<"Masukkan Bilangan Pertama : "; cin>>j;
				cout<<"Masukkan Bilangan Pangkat : "; cin>>k;
				int m = pow(j,k);
				cout<<"Hasilnya adalah  : "<< m <<endl;
				break;
			}
		   case 6 :
			{
				cout<<"End"<<endl;
			}
		}
		return 0;
	}
		
