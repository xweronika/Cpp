/*Napisz program, kt�ry b�dzie symulowa� klas� student�w z ich
ocenami. Program powinien wczyta� pi�ciu student�w o
nast�puj�cych w�a�ciwo�ciach:
. imi� studenta
. ocena z j. polskiego, matematyki, informatyki oraz biologii,
a nast�pnie odpowiada� na pytania o ocen� z danego przedmiotu
podaj�c najpierw numer studenta a nast�pnie numer przedmiotu.*/


#include <iostream>
using namespace std; 
struct klasa
{
int nr;
string imie;
int pol;
int mat;
int inf;
int biol;	
};

int main(){
	int y=0, x;
	
	klasa a [5];
	
	a[0] = {1, "Adam", 3, 4, 5, 4};
	a[1] = {2, "Ewa", 2, 3, 5, 5};
	a[2] = {3, "Wiktor", 5, 5, 2, 1};
	a[3] = {4, "Ala", 3, 4, 5, 6};
	a[4] = {5, "Ola", 4, 6, 3, 1};
	


	cout<<"1.Pol 2.Mat 3.Inf 4.Biol"<<endl<<"Podaj nr przedmiotu:"<<endl;
	cin>>x;
	
		if (x==1) 
	do{
	cout<<a[y].nr<<" - "<<a[y].pol<<endl;
	y=y+1;
	}while(y<5);
		
		
		if (x==2) 
	do{
	cout<<a[y].nr<<" - "<<a[y].mat<<endl;
	y=y+1;
	}while(y<5);
	
	
		if (x==3) 
	do{
	cout<<a[y].nr<<" - "<<a[y].inf<<endl;
	y=y+1;
	}while(y<5);
	
	
		if (x==4) 
	do{
	cout<<a[y].nr<<" - "<<a[y].biol<<endl;
	y=y+1;
	}while(y<5);
	
}

