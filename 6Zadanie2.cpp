/*Napisz program definiuj�cy zmienn� typu
TData oraz wska�nik do zmiennej typu
TData. Program powinien wczyta� z
klawiatury warto�ci p�l zmiennej. Zastosuj
wska�nik i operator adresu (nie stosuj
operatora new).*/

#include<iostream>
using namespace std;

struct TData
{
	int a;
};

main(){
	TData x ;
	TData*aa;
	aa=&x;

	cout<<"Podaj warosc: ";
	cin>>	x.a;
  	//cin>>	(*aa).a; 
	//cin>>	aa->a;
	


	
}
