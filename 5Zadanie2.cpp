/*Napisz funkcjê, która ma trzy parametry a, b, c bêd¹ce liczbami ca³kowitymi. 
Wartoœci¹ funkcji jest jeden, jeœli zadane liczby s¹ liczbami pitagorejskimi oraz zero 
w przeciwnym wypadku. Liczby pitagorejskie spe³niaj¹ warunek: a*a+b*b=c*c.
Program ma drukowaæ na ekranie wszystkie trójki liczb pitagorejskich z zakresu od 1 do 10.*/

#include<iostream>
using namespace std;
int funkcja(int a, int b, int c);

main(){
funkcja(3, 4, 5);
	
}

int funkcja(int a, int b, int c){

int x;

if((a*a+b*b)==(c*c))
x=1;

else 
x=0;

cout<<x;
return x;	
}

