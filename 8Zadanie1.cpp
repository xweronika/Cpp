/*Napisz klasê o nazwie samochód, której
sk³adnikami bêd¹ cena, moc i maksymalna
prêdkoœæ. Dopisz równie¿ dwie funkcje:
pobieraj¹c¹ i wypisuj¹c¹ parametry
samochodu. W funkcji g³ównej wywo³aj je.*/

#include<iostream>
using namespace std;

class samochod{
	public:
	
	double cena;
	int moc;
	int max;
	
	void pobierz();
	void wypisz();
	
};

main(){
	
	samochod samochod1;
	samochod1.pobierz();
	samochod1.wypisz();

}

void samochod::pobierz() {
	cout<< "Podaj cene ";
	cin>> cena;
	cout<< endl<< "Podaj moc ";
	cin>> moc;
	cout<< endl<<"Podaj predkosc max ";
	cin>> max;
}

void samochod::wypisz(){
	
	cout << "Cena samochodu " << cena << endl << "Moc samochodu " << moc << endl << "Predkosc max " << max;
	
}
