/*Napisz klas� o nazwie samoch�d, kt�rej
sk�adnikami b�d� cena, moc i maksymalna
pr�dko��. Dopisz r�wnie� dwie funkcje:
pobieraj�c� i wypisuj�c� parametry
samochodu. W funkcji g��wnej wywo�aj je.*/

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
