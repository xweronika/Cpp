/*Napisz program ��daj�cy od u�ytkownika
podania dw�ch liczb ca�kowitych. Program
powinien wyliczy� i poda� sum� wszystkich
liczb ca�kowitych pomi�dzy podanymi liczbami. */

#include <iostream>
using namespace std;

int main(){
		int m, n, suma;
	
	
	cout<<"Podaj liczby:"<<endl;
	cin>>m>>n;
	
	for (int i=m; i<n; i++){
		suma = suma + i;
	}
	cout<<"Suma:"<<suma;
}
