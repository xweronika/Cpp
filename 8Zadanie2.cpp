/*Napiszmy klas� uczen, kt�rej sk�adnikami
b�d�: imi� ucznia, nazwisko, klasa i ocena
ko�cowa. Klasa ma posiada� r�wnie� funkcje
wczytuj�c� dane i wypisuj�c� dane ucznia.*/

#include<iostream>
#include<cstring>
using namespace std;



class uczen{
	public:
		string imie;
		string nazwisko;
		char klasa[2];
		int ocena;
		
		void wczytaj(){
	cout<< "Podaj imie: ";
	cin>>imie;
	cout<<endl<<"Podaj nazwisko: ";
	cin>>nazwisko;
	cout<< endl<< "Podaj klase: ";
	cin>>klasa;
	cout<<endl<<"Podaj ocene: ";
	cin>>ocena;
	
}
		void wypisz(){
	cout<<imie<<endl<<nazwisko<<endl<<klasa<<endl<<ocena;
}
		
};

main(){
	uczen uczen1;
	uczen1.wczytaj();
	uczen1.wypisz();
}





/*class uczen{
	public:
		string imie;
		string nazwisko;
		string klasa;
		int ocena;
		
		void wczytaj();
		void wypisz();
		
};

main(){
	uczen uczen1;
	uczen1.wczytaj();
	uczen1.wypisz();
}

void uczen :: wczytaj(){
	cout<< "Podaj imie: ";
	cin>>imie;
	cout<<endl<<"Podaj nazwisko: ";
	cin>>nazwisko;
	cout<< endl<< "Podaj klase: ";
	cin>>klasa;
	cout<<endl<<"Podaj ocene: ";
	cin>>ocena;
	
}

void uczen :: wypisz(){
	cout<<imie<<endl<<nazwisko<<endl<<klasa<<endl<<ocena;
}
