/*Napisz funkcjê otrzymuj¹c¹ jako argumenty
tablicê (dynamiczn¹) typu double oraz
zmienn¹ typu int oznaczaj¹c¹ rozmiar tablicy,
a nastêpnie zwracaj¹ca œredni¹ arytmetyczn¹
wszystkich elementów tablicy.
? Wywo³aj j¹ na dwóch ró¿nych, zaalokowanych
i zainicjalizowanych losowymi wartoœciami
tablicach (dynamicznych).*/

#include<iostream>
using namespace std;

double funkcja(double tab[], int rozmiar){
	 int suma=0;
	 double srednia=0;
	 for(int j=0; j<rozmiar; j++){
	 	suma+=tab[j];
	 }
	 srednia=suma/rozmiar;
	 
return srednia;
}
main(){


int rozmiar;
 
cout << "Podaj rozmiar tablicy:" << endl;
cin >> rozmiar;
 
double * tab = new double[rozmiar];

for (int i=0; i<rozmiar; i++){
	
		cout<<"Podaj "<<i+1<<" element tablicy: ";
		cin>>tab[i];
		cout<<endl;

}

cout<<funkcja(tab, rozmiar);

}
