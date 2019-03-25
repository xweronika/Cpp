/*Plorg betelgeski ma nastêpuj¹ce w³asnoœci:
.Cechy:
.Plorg ma imiê sk³adaj¹ce siê z najwy¿ej 19 liter,
.Plorg ma wspó³czynnik sytoœci bêd¹cy liczb¹ ca³kowit¹.
.Zachowanie:
.Plorg rodzi siê z imieniem i wspó³czynnikiem sytoœci równym 50,
.Plorg mo¿e zmieniæ swój wspó³czynnik systoœci,
.Plorg potrafi powiedzieæ swoje imiê i podaæ wspó³czynnik sytoœci,
.Domyœlnie plorg ma na imiê „Plorga”.
Napisz deklaracjê klasy Plorg (obejmuj¹c¹ deklaracjê sk³adowych i prototyp metod)
 reprezentuj¹c¹ plorga betelgeskiego. Utwórz definicjê metod klasy. Napisz krótki program demonstruj¹cy wszystkie cechy klasy Plorg.*/
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
