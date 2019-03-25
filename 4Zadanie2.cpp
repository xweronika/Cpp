/* Napisz program wykorzystuj¹cy nastêpuj¹ce funkcje:
Funkcje fill_array() jako parametr pobiera nazwê tablicy oraz
jej wielkoœæ. U¿ytkownik jest proszony o podanie wartoœci
double, które zostan¹ wpisane do tablicy. Pobieranie
danych jest przerywane, kiedy tablica jest pe³na. Funkcja
zwraca liczbê wprowadzonych wartoœci.
Funcka show_array() jako parametr pobiera nazwê tablicy
liczb double oraz wielkoœæ tablicy po czym pokazuje
zawartoœæ tablicy
Funkcja reverse_array() jako parametr pobiera nazwê tablicy
oraz jej wielkoœæ, po czym odwraca kolejnoœæ liczb w
przekazanej tablicy
Program ma u¿yæ opisanych funkcji do wype³nienia tablicy,
wyœwietlenia jej, odwrócenia i ponownego wyœwietlenia */

#include<iostream>
using namespace std;

int fill_array(double tab[], int b){
	
	for(int i=0; i<b; i++){
	cout<<"Podaj wartosc:";
	cin>>tab[i];
}
	return b;
}

void show_array(double tab[], int b){
	for(int i=0; i<b; i++){
		cout<<tab[i]<<endl;
	}
}

void reverse_array(double tab[], int b){
	cout<<"Od ty³u:"<<endl;
	
	for(int i=b-1; i!=-1; i--){ //bo tab jest od 0 do 4
	cout<<tab[i];
	}

}
main(){
int b=5;
double tab[b];
fill_array(tab, b);
show_array(tab, b);
reverse_array (tab, b);
}
