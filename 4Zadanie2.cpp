/* Napisz program wykorzystuj�cy nast�puj�ce funkcje:
Funkcje fill_array() jako parametr pobiera nazw� tablicy oraz
jej wielko��. U�ytkownik jest proszony o podanie warto�ci
double, kt�re zostan� wpisane do tablicy. Pobieranie
danych jest przerywane, kiedy tablica jest pe�na. Funkcja
zwraca liczb� wprowadzonych warto�ci.
Funcka show_array() jako parametr pobiera nazw� tablicy
liczb double oraz wielko�� tablicy po czym pokazuje
zawarto�� tablicy
Funkcja reverse_array() jako parametr pobiera nazw� tablicy
oraz jej wielko��, po czym odwraca kolejno�� liczb w
przekazanej tablicy
Program ma u�y� opisanych funkcji do wype�nienia tablicy,
wy�wietlenia jej, odwr�cenia i ponownego wy�wietlenia */

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
	cout<<"Od ty�u:"<<endl;
	
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
