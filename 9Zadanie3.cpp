/*Plorg betelgeski ma nast�puj�ce w�asno�ci:
.Cechy:
.Plorg ma imi� sk�adaj�ce si� z najwy�ej 19 liter,
.Plorg ma wsp�czynnik syto�ci b�d�cy liczb� ca�kowit�.
.Zachowanie:
.Plorg rodzi si� z imieniem i wsp�czynnikiem syto�ci r�wnym 50,
.Plorg mo�e zmieni� sw�j wsp�czynnik systo�ci,
.Plorg potrafi powiedzie� swoje imi� i poda� wsp�czynnik syto�ci,
.Domy�lnie plorg ma na imi� �Plorga�.
Napisz deklaracj� klasy Plorg (obejmuj�c� deklaracj� sk�adowych i prototyp metod)
 reprezentuj�c� plorga betelgeskiego. Utw�rz definicj� metod klasy. Napisz kr�tki program demonstruj�cy wszystkie cechy klasy Plorg.*/
 #include<iostream>
 #include<cstdlib>
 using namespace std;
 
 class Plorg{
private:
	string imie;
	int sytosc;
public: 
	Plorg(){
		imie = "Plorga";
		sytosc = 50;
	}
	
	void setSytosc(int s){
		sytosc = s;
	}
	
	void showPlorg(){
		cout << "Imie: " << imie << endl;
		cout << "Sytosc: " << sytosc << endl;
	}	
};


	main() {
		
	Plorg *P1 = new Plorg();
	
	P1->showPlorg();
	P1->setSytosc(4);
//	(*P1).setSytosc(4);
	P1->showPlorg();
}
