/*Napisz funkcj� otrzymuj�c� jako argumenty
tablic� (dynamiczn�) typu double oraz
zmienn� typu int oznaczaj�c� rozmiar tablicy,
a nast�pnie zwracaj�ca �redni� arytmetyczn�
wszystkich element�w tablicy.
? Wywo�aj j� na dw�ch r�nych, zaalokowanych
i zainicjalizowanych losowymi warto�ciami
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
