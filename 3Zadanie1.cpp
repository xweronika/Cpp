/*Struktura batonik ma trzy pola. 
Pierwsze to marka, drugie to waga, 
trzecie to liczba kalorii. 
a) Napisz program deklaruj¹cy tak¹ 
strukturê i tworz¹cy zmienn¹ typu 
batonik o nazwie snack („Mocha 
Munch”, 2.3 , 350). Wyœwietl 
zawartoœæ zmiennej snack. 
b) Zadeklaruj 3 elementow¹ 
zmienna typu batonik 
inicjalizuj¹c¹ j¹ dowolnymi 
wartoœciami i wyœwietliæ zawartoœæ
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

