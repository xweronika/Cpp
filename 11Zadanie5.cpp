/*Napisz funkcj� otrzymuj�c� jako argumenty
dwie tablice (dynamiczne) o takim samym
rozmiarze n oraz liczb� ca�kowit� n, a
nast�pnie zwracaj�c� sum� kwadrat�w r�nic
mi�dzy tymi tablicami.*/

#include<iostream>

using namespace std;

int funkcja (int tab1[], int tab2[], int rozmiar){
	int x,suma1,suma2;
	
	
	for(int i=0;i<rozmiar;i++){
		suma1 = suma1 + (tab1[i]*tab1[i]);
		suma2=	suma2 + (tab2[i]*tab2[i]);
	}
	
	x = suma1 - suma2;
	return x;
} 


main(){
int rozmiar;
 
cout << "Podaj rozmiar tablicy:" << endl;
cin >> rozmiar;
 
int * tab1 = new int[rozmiar];
int * tab2 = new int[rozmiar];

funkcja(tab1,tab2,rozmiar);	
	
}
