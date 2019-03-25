/*Problem: w pewnym piêcioboju zawodnicy rywalizuj¹ ze sob¹ dziesi¹tkami. 
Punkty zdobyte w czasie ka¿dej z piêciu konkurencji s¹ sumowane. 
Zwyciê¿a ten zawodnik, który zgromadzi³ wiêksz¹ liczbê punktów. 
Program wczytuje punkty zgromadzone przez ka¿dego zawodnika w ka¿dej z
piêciu konkurencji. Wyznaczana jest suma punktów i wskazywany jest zwyciêzca.*/
//nie dzia³a

#include<iostream>
using namespace std;

main(){
	
	int tab[10][5];
	int suma[10];
	int max = 0, numer;
	for(int i = 0; i < 10; i++){
		cout << "Prosze wpisac punkty " << i+1 << " zawodnika" << endl;
		for(int j = 0; j < 5; j++){
			cin >> tab[i][j];
			suma[i] += tab[i][j];
		}
	}
	max = suma[0];
	for(int s = 1; s < 10; s++){		
		if(suma[s] > max){
			max = suma[s];
			numer = s;
		}
	}
	cout << "Najwiecej punktow zdobyl zawodnik numer " << numer << endl;
	
}
