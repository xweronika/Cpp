/*Napisz program, który tworzy klasê Rachunek
o polach: data, wartosc_netto, podatek,
wartosc_brutto. Napisaæ funkcjê, która
wczytuje datê, wartoœæ netto, oraz funkcjê,
która oblicza wartoœæ podatku oraz wartoœæ
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
