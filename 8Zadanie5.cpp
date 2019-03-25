/*Za��my, �e gromadzimy wod� mineraln�. S� trzy rodzaje butelek � o
pojemno�ci 2l (du�e), �rednie o pojemno�ci 1l oraz ma�e o pojemno�ci
0.5 litra. Stworzy� klas� MyWater z metodami:
? void addLarge(int) � dodaje do zapasu wody podan� jako argument liczb� du�ych
butelek.
? void addMedium(int) � dodaje do zapasu wody podan� jako argument liczb� �rednich
butelek.
? void addSmall(int) � dodaje do zapasu wody podan� jako argument liczb� ma�ych
butelek.
Dodatkowo nale�y zaimplementowa� metody umo�liwiaj�ce uzyskanie
informacji o tym ile jest ka�dego rodzaju butelek, oraz jaka jest ��czna
pojemno�� zgromadzonej wody.
Pojemno�ci butelek (du�ych, ma�ych, �rednich) przedstawi� jako pola
statyczne. Dostarczy� metod pozwalaj�cych uzyskiwa� informacje o tych
pojemno�ciach oraz je zmienia�.
Klas� przetestowa� wyprowadzaj�c dane na ekran w stylu:
Mam teraz 6.5 litr�w wody.
Du�ych butelek: 2
Ma�ych butelek: 3
�rednich butelek: 1 */

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
