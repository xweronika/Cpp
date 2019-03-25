
/*Napisaæ program wyliczaj¹cy pole trójk¹ta — 
program wczytuje wysokoœæ h, podstawê a (s¹ 
to dowolne liczby rzeczywiste), oblicza pole 
i wyœwietla wynik. Zak³adamy, ¿e d³ugoœci a 
i h s¹ wyra¿one w centymetrach, wynik ma 
byæ wyra¿ony w metrach kw. Program powinien
 na samym pocz¹tku wyœwietliæ krótk¹ 
 informacjê o jego przeznaczeniu oraz 
 zatrzymaæ swoje wykonanie po wyœwietleniu 
 wyniku — do czasu naciœniêcia klawisza Enter. */

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
	
	
