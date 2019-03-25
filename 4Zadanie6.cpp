/*Napisz funkcjê, której argumentami s¹ n typu int oraz w wskaŸnik do int, 
która przepisuje wartoœæ n do zmiennej wskazywanej przez wskazniki */

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
