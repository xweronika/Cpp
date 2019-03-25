/*Napisz program, który poprosi u¿ytkownika o podanie liczby wyœwietlanych wierszy. 
Nastêpnie poka¿e liczbê ¿¹danych wierszy z gwiazdkami: 1 gwiazdka w pierwszym wierszu, 
2 w drugim itd. */

#include<iostream>
using namespace std;


main() {
	
	int x;
	cout << "Podaj liczbe wierszy:"<<endl;
	cin >> x;
	
	for (int i = 1; i <= x; i++){ //wiersze
		for (int w = 1; w <= i ; w++){ //gwiazdki
		cout << "*";		
		}
		cout << endl;
	}

}
