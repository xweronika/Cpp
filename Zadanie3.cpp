
/*Napisa� program wyliczaj�cy pole tr�jk�ta � 
program wczytuje wysoko�� h, podstaw� a (s� 
to dowolne liczby rzeczywiste), oblicza pole 
i wy�wietla wynik. Zak�adamy, �e d�ugo�ci a 
i h s� wyra�one w centymetrach, wynik ma 
by� wyra�ony w metrach kw. Program powinien
 na samym pocz�tku wy�wietli� kr�tk� 
 informacj� o jego przeznaczeniu oraz 
 zatrzyma� swoje wykonanie po wy�wietleniu 
 wyniku � do czasu naci�ni�cia klawisza Enter. */

#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    double h, a, p;
	cout<<"Program wyliczajacy pole trojkata"<<endl;
	
	cout<<"Podaj wysokosc:";
	cin>>h;
	
	cout<<"Podaj podstawe:";
	cin>>a;
	
	p=((a*h)/2)/10000;
	cout<<"Pole to:"<<p<<"m^2";
	
	return 0;
	
}
	
	
