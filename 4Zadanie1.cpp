/*Napisz program, który poprosi u¿ytkownika o
podawanie dwóch liczb tak d³ugo, a¿ jedna z
nich bêdzie zerem. Dla ka¿dej pary liczb
program ma wyliczyæ ich œredni¹
harmoniczn¹. Funkcja ma zwracaæ wynik
funkcji main(), która z kolei wynik ten ma
pokazaæ.*/

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
