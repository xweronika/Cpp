/*Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik do int, 
kt�ra przepisuje warto�� n do zmiennej wskazywanej przez wskazniki */

#include<iostream>
using namespace std;

void moja(int n, int*w);

main (){
	int n=3;
	int *w = new int;
}

void moja(int n, int*w){
	w = &n;
	
}
