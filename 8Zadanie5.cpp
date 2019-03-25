/*Za³ó¿my, ¿e gromadzimy wodê mineraln¹. S¹ trzy rodzaje butelek – o
pojemnoœci 2l (du¿e), œrednie o pojemnoœci 1l oraz ma³e o pojemnoœci
0.5 litra. Stworzyæ klasê MyWater z metodami:
? void addLarge(int) – dodaje do zapasu wody podan¹ jako argument liczbê du¿ych
butelek.
? void addMedium(int) – dodaje do zapasu wody podan¹ jako argument liczbê œrednich
butelek.
? void addSmall(int) – dodaje do zapasu wody podan¹ jako argument liczbê ma³ych
butelek.
Dodatkowo nale¿y zaimplementowaæ metody umo¿liwiaj¹ce uzyskanie
informacji o tym ile jest ka¿dego rodzaju butelek, oraz jaka jest ³¹czna
pojemnoœæ zgromadzonej wody.
Pojemnoœci butelek (du¿ych, ma³ych, œrednich) przedstawiæ jako pola
statyczne. Dostarczyæ metod pozwalaj¹cych uzyskiwaæ informacje o tych
pojemnoœciach oraz je zmieniaæ.
Klasê przetestowaæ wyprowadzaj¹c dane na ekran w stylu:
Mam teraz 6.5 litrów wody.
Du¿ych butelek: 2
Ma³ych butelek: 3
Œrednich butelek: 1 */

#include<iostream>
using namespace std;

class MyWater{
	public:
		
	int Large;
	int Medium;
	int Small;
	
	static double pLarge;
	static double pMedium;
	static double pSmall;
	
	void addLarge(int L);
	void addMedium(int M);
	void addSmall(int S);
	void set_p();
	void show();
};


int main(){
	
	MyWater woda1;
	woda1.Large = 2;
	woda1.Medium = 2;
	woda1.Small = 1;
	woda1.addSmall(1); //dodaje 1 mala butelke
	woda1.show();
	
	return 0;
}


double MyWater::pLarge = 2;
double MyWater::pMedium = 1;
double MyWater::pSmall = 0.5;

void MyWater::addLarge(int L){
	Large = Large + L;
}

void MyWater::addMedium(int M){
	Medium = Medium + M;
}

void MyWater::addSmall(int S){
	Small = Small + S;
}

void MyWater::set_p(){
	int x;
	cout << "Ktora pojemnosc ma byc zmieniona \n" << "[1] Duze butelki \n" << "[2] Srednie butelki \n" << "[3] Male butelki \n";
	cin >> x;
	
	if (x == 1){
		cout << "Podaj pojemnosc duzej butelki: ";
		cin >> pLarge;
	}
	else if (x == 2){
		cout << "Podaj pojemnosc sredniej butelki: ";
		cin >> pMedium;
	}
	else if (x == 3){
		cout << "Podaj pojemnosc malej butelki: ";
		cin >> pSmall;
	}	
}

void MyWater::show(){
	double woda;
	woda = (Large * pLarge) + (Small * pSmall) + (Medium * pMedium);
	cout << "Duzych butelek: " << Large << endl << "Srednich butelek: "<<Medium<<endl<<"Malych butelek: "<<Small<<endl<<"Ilosc wody: "<<woda;
}
