/*Napisa� program wyliczaj�cy pole ko�a oraz kwadratu na nim
opisanego � program wczytuje promie� r (to dowolna liczba
rzeczywista), oblicza pole, d�ugo�� boku a kwadratu opisanego
na takim okr�gu, oraz jego pole i wy�wietla te wyniki. Program
powinien na samym pocz�tku wy�wietli� kr�tk� informacj� o
jego przeznaczeniu oraz zatrzyma� swoje wykonanie po
wy�wietleniu wyniku � do czasu naci�ni�cia klawisza Enter. */


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double r, a, pkola, pkwadratu;
	cout<<"Program wyliczaj�cy pole ko�a oraz kwadratu na nim opisanego"<<endl;
	cout<<"Podaj promien:"<<endl;
	cin>>r;
	
	pkola = M_PI*r*r;
	cout<<"Pole kola to:"<<pkola<<endl;
	
	a=2*r;
	cout<<"Bok kwadratu to:"<<a<<endl;
	
	pkwadratu=a*a;
	cout<<"Pole kwadratu to:"<<pkwadratu;
	
	return 0;
	
}
