/*Napisz funkcj�, kt�ra znajduje w tablicy element maksymalny. 
Parametrami funkcji maj� by�: tablica tab oraz liczba element�w 
tablicy � n. Warto�ci� funkcji ma by� element maksymalny.*/

#include<iostream>
using namespace std;
int funkcja(int tab[], int n);;

main(){
	int tab[3] = {1,5,4};
funkcja(tab, 3);
	
}

int funkcja(int tab[], int n){

	int max=0;   // lub int max = tab[0]; i i=1; i<=n

	for(int i=0; i<n; i++){
		if(tab[i]>max)
		max=tab[i];
}

	cout<<max;
	return max;
	
}


