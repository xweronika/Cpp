/*Napisz program, kt�ry poprosi u�ytkownika o
podawanie dw�ch liczb tak d�ugo, a� jedna z
nich b�dzie zerem. Dla ka�dej pary liczb
program ma wyliczy� ich �redni�
harmoniczn�. Funkcja ma zwraca� wynik
funkcji main(), kt�ra z kolei wynik ten ma
pokaza�.*/

#include<iostream>
using namespace std;

double funkcja (double a, double b);

main(){
	double  a, b;
	double srednia = 0.0;
	
	
	do{
		cout<<"Podaj liczbe 1:";
		cin>>a;
		cout<<"Podaj liczbe 2:";
		cin>>b;
	 if( a==0 || b==0 ) break;
	 	cout << funkcja (a, b) << endl;
	 } while (true);   // lub zamiast if: while (a!=0 || b!=0);
	
} 
double funkcja (double a, double b){
	return (2.0/((1.0/a)+(1.0/b)));
}
