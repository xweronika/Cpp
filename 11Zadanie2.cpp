/*Zadeklaruj dynamiczn¹ trójwymiarow¹ tablicê
elementów typu ca³kowitego wype³nij j¹
danymi a nastêpnie podziel j¹ na K (podane
przez u¿ytkownika) tablic (plastrów)
wzglêdem jednego z wymiarów (równie¿
podanego przez u¿ytkownika).
? Uwzglêdnij brak mo¿liwoœci równego
podzia³u tzn. np. tab[10][12][15] nie da siê
podzieliæ wzglêdem ostatniego wymiaru na 2
tablice.*/

#include<iostream>
#include<cstdlib>
using namespace std;

main(){
	
	int rozmiar1, rozmiar2, rozmiar3, K ;
	string n;
	cout<<"Podaj 1 dlugosc tablicy"<<endl;
	cin>>rozmiar1;
	cout<<"Podaj 2 dlugosc tablicy"<<endl;
	cin>>rozmiar2;
	cout<<"Podaj 3 dlugosc tablicy"<<endl;
	cin>>rozmiar3;
	
	int ***tab = new int** [rozmiar1];
	for(int i=0;i<2;i++){
	 //tablica[i] = new int [rozmiar1][rozmiar2][rozmiar3];
	}
	
	for(int x=0; x<rozmiar1; x++){
		for(int y=0; y<rozmiar2; y++){
			for(int z=0; z<rozmiar3; z++){
				cout<<"Podaj wartosc tablicy dla wymiarow"<<" "<<x+1<<"  "<<y+1<<"  "<< z+1<<"  ";
				cin>>tab[x][y][z];
			}
		}
	}
	
	cout<<"Podaj K: ";
	cin>>K;
	cout<<"Podaj wzgledem ktorego z wymiarow (xyz) "<<endl;
	cin>>n;
	if( n=="x" ){
		if(rozmiar1%K!=0){
			cout<<"K jest niepoprawne";
		}
		//else{
			//for(int i=1; i<=K; i++){
			
			//tab1 [rozmiar1/k]
	//}
		}
	}
//}
