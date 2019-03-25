/*B. Napisz funkcjê otrzymuj¹c¹ jako argumenty
dwa wskaŸniki na zmienne typu int, a
nastêpnie zwraca wskaŸnik na zmienn¹,
której wartoœæ jest mniejsza.*/

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
