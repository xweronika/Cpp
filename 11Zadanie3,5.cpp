/*B. Napisz funkcj� otrzymuj�c� jako argumenty
dwa wska�niki na zmienne typu int, a
nast�pnie zwraca wska�nik na zmienn�,
kt�rej warto�� jest mniejsza.*/

#include<iostream>

using namespace std;

int *  f(int *aa, int *bb){ //wskaznik na f bo zwracamy wskazniki
	if(*aa>*bb) return bb;
	else return aa;
}



main(){
int a = 10;
int b = 5;
int *aa=&a;
int *bb=&b;
f(aa,bb);
	
	
	
}
