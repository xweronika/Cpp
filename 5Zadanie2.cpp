/*Napisz funkcj�, kt�ra ma trzy parametry a, b, c b�d�ce liczbami ca�kowitymi. 
Warto�ci� funkcji jest jeden, je�li zadane liczby s� liczbami pitagorejskimi oraz zero 
w przeciwnym wypadku. Liczby pitagorejskie spe�niaj� warunek: a*a+b*b=c*c.
Program ma drukowa� na ekranie wszystkie tr�jki liczb pitagorejskich z zakresu od 1 do 10.*/

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

