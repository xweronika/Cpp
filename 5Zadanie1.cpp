/*Problem: w pewnym pi�cioboju zawodnicy rywalizuj� ze sob� dziesi�tkami. 
Punkty zdobyte w czasie ka�dej z pi�ciu konkurencji s� sumowane. 
Zwyci�a ten zawodnik, kt�ry zgromadzi� wi�ksz� liczb� punkt�w. 
Program wczytuje punkty zgromadzone przez ka�dego zawodnika w ka�dej z
pi�ciu konkurencji. Wyznaczana jest suma punkt�w i wskazywany jest zwyci�zca.*/
//nie dzia�a

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
