/*Napisz program, który wczytuje z klawiatury
ci¹g liczb ca³kowitych. Liczba zero koñczy
wczytywanie. Wczytane liczby zapisz do
pliku tekstowego liczby.txt. Liczby oddziel
znakiem spacji.*/

#include<iostream>
#include<fstream>
using namespace std;

void program(){
	
	fstream plik;
	int x;
	plik.open("d:\\Liczby.txt", ios::out);
	if(!plik)
	cout<<"Nie mozna zapisac pliku."<<endl;
	do{
		cout<<"Podaj liczbe:"<<endl;
		cin>>x;
		if (x != 0)
		plik<<x<<endl;
	} while (x != 0);
	
	plik.close();
	
}

main(){
	program();
}


/*  Inaczej:
 
main(){
	fstream plik;
	int x;
	plik.open("d:\\liczby.txt", ios::out);
	if(!plik)
		cout <<"Nie mo¿na zapisac pliku"<<endl;
	
	do{ 
		cout<<"Podaj liczbe:";
		cin>>x;
		plik<<x<<" ";
		
	}while(x!=0);

	
}  */
