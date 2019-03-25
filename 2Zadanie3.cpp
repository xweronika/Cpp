/*Napisz program ¿¹daj¹cy od u¿ytkownika
podania dwóch liczb ca³kowitych. Program
powinien wyliczyæ i podaæ sumê wszystkich
liczb ca³kowitych pomiêdzy podanymi liczbami. */

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
