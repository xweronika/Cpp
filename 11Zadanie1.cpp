/*Napisz program, który stworzy tablicê
dynamiczn¹ (o wielkoœci podanej przez
u¿ytkownika), po czym uzupe³ni tabelê
liczbami ca³kowitymi wprowadzanymi przez
u¿ytkownika, a po wprowadzeniu wszystkich
elementów wyœwietli zawartoœæ tablicy*/

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
