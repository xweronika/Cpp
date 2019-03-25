/*Napisz program definiuj¹cy zmienn¹ typu
TData oraz wskaŸnik do zmiennej typu
TData. Program powinien wczytaæ z
klawiatury wartoœci pól zmiennej. Zastosuj
wskaŸnik i operator adresu (nie stosuj
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
