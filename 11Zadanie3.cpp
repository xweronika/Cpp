/*Napisz funkcj� otrzymuj�c� jako argumenty
dwa wska�niki na zmienne typu int, a
nast�pnie zwraca minimum z warto�ci
wskazywanych przez wska�niki
*/

#include<iostream>

using namespace std;

int f(int *aa, int *bb){
	if(*aa>*bb) return *bb;
	else return *aa;
}



main(){
int a = 10;
int b = 5;
int *aa=&a;
int *bb=&b;
f(aa,bb);
	
	
	
}
