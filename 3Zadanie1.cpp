/*Struktura batonik ma trzy pola. 
Pierwsze to marka, drugie to waga, 
trzecie to liczba kalorii. 
a) Napisz program deklaruj�cy tak� 
struktur� i tworz�cy zmienn� typu 
batonik o nazwie snack (�Mocha 
Munch�, 2.3 , 350). Wy�wietl 
zawarto�� zmiennej snack. 
b) Zadeklaruj 3 elementow� 
zmienna typu batonik 
inicjalizuj�c� j� dowolnymi 
warto�ciami i wy�wietli� zawarto��
 struktur */
 #include <iostream>
using namespace std; 
struct batonik
{
	string marka;
	double waga;
	double kalorie;
	
};
int main(){ 
	batonik snack = { 
		"Mocha Munch", 
		2.3 , 
		350};
	
	batonik b [3];

b[0].marka="m";
b[0].waga=1.3;
b[0].kalorie=2;

cout<<"Marka:"<<batonik.marka<<endl;
cout<<"Waga:"<<b[0].waga<<endl;
cout<<"Kalorie:"<<b[0].kalorie;
}

