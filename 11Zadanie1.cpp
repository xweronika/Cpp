/*Napisz program, kt�ry stworzy tablic�
dynamiczn� (o wielko�ci podanej przez
u�ytkownika), po czym uzupe�ni tabel�
liczbami ca�kowitymi wprowadzanymi przez
u�ytkownika, a po wprowadzeniu wszystkich
element�w wy�wietli zawarto�� tablicy*/

#include<iostream>

using namespace std;

int main (){
	
	int rozmiar;
	cout<<"Podaj rozmiar tablicy"<<endl;
	cin>>rozmiar;
	
	int tab[rozmiar];
	
	for(int i =0;i<rozmiar;i++){
		cout<<"Podaj "<<i+1<<" element tablicy: ";
		cin>>tab[i];
		cout<<endl;
	}
	
	for(int i =0;i<rozmiar;i++){
		cout<<i+1<<" element tablicy: "<<tab[i]<<endl;
	}
	
	
return 0;
}
