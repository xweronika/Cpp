/*Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch zmiennych typu 
int, która zwraca jako wartoœæ mniejsz¹ z liczb wskazywanych przez argumenty*/

#include <iostream>
using namespace std;

int moja(int a, int b);
	
int main(int argc, char** argv) {
	
	int a = 1;
	int b = 2;
	int *aa = new int;
	int *bb=  new int;
	aa = &a;
	bb = &b;
	
	cout << moja (*aa,*bb);
	return 0;
}

int moja(int a, int b){
	int x;
	if (a > b)
		x = b;
	else
		x = a;
	
	return x;
}
