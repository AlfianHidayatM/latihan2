#include<iostream>
using namespace std;

int main(){
	int alas,luas,lebar,tinggi;
	char inisial;
	menu:
		system("cls");
		cout<<"==================================\n";
		cout<<"|--Menghitung Luas Bangun Datar--|\n";
		cout<<"==================================\n"<<endl;
		cout<<"|----Menghitung Luas Segitiga----|\n";
		cout<<"|-----Menghitung Luas Persegi----|\n"<<endl;
		cout<<"Anda Bisa Memilih S/s untuk segitiga\n";
		cout<<"Anda Bisa Memilih P/p untuk persegi\n"<<endl;
		cout <<"Anda Mau Hitung Apa? \n"
			 <<"'p'untuk persegi | 'S' untuk segitiga= ";
		cin >> inisial;
		
		if (inisial=='S' || inisial=='s'){
		cout <<"Masukan alas : "; 
		cin >> alas;
		cout <<"Masukan Tinggi : ";
		cin >> tinggi;
		cout <<0.5*alas*tinggi;
	}
	else if (inisial=='P'||inisial=='p'){
		cout <<"Masukan Tinggi : ";
		cin >> tinggi;
		cout <<"Masukan Lebar : ";
		cin >> lebar;
		cout <<tinggi*lebar;
	}
	else
	cout <<"Lihat diatas Prosedurnya";
}
