/*Napisz program, kt�ry tworzy klas� Rachunek
o polach: data, wartosc_netto, podatek,
wartosc_brutto. Napisa� funkcj�, kt�ra
wczytuje dat�, warto�� netto, oraz funkcj�,
kt�ra oblicza warto�� podatku oraz warto��
brutto dla stawki 23%*/

#include<iostream>
using namespace std;

class rachunek{
	public:
		char data[10];
		double netto;
	    double podatek;
		double brutto;
		
		void wczytaj(){
			cout<<"Podaj date: ";
			cin>>data;
			cout<<endl<<"Podaj wartosc netto: ";
			cin>>netto;
		}
		void oblicz(){
			podatek = netto*0.23;
			brutto = netto-podatek;
			cout<<"Podatek = "<<podatek<<endl<<"Wartosc brutto = "<<brutto;
		}

		
};

main(){
	
	rachunek a;
	a.wczytaj();
	a.oblicz();
	
}


/*
class rachunek{
	public:
		char data[10];
		double netto;
	    double podatek;
		double brutto;
		
		void wczytaj();
		void oblicz();
		
};

main(){
	
	rachunek a;
	a.wczytaj();
	a.oblicz();
	
}

void rachunek :: wczytaj(){
	cout<<"Podaj date: ";
	cin>>data;
	cout<<endl<<"Podaj wartosc netto: ";
	cin>>netto;
}

void rachunek :: oblicz(){
	podatek = netto*0.23;
	brutto = netto-podatek;
	cout<<"Podatek = "<<podatek<<endl<<"Wartosc brutto = "<<brutto;
}
