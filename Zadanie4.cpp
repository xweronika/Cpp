/*Napisaæ program wyliczaj¹cy pole ko³a oraz kwadratu na nim
opisanego — program wczytuje promieñ r (to dowolna liczba
rzeczywista), oblicza pole, d³ugoœæ boku a kwadratu opisanego
na takim okrêgu, oraz jego pole i wyœwietla te wyniki. Program
powinien na samym pocz¹tku wyœwietliæ krótk¹ informacjê o
jego przeznaczeniu oraz zatrzymaæ swoje wykonanie po
wyœwietleniu wyniku — do czasu naciœniêcia klawisza Enter. */


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double r, a, pkola, pkwadratu;
	cout<<"Program wyliczaj¹cy pole ko³a oraz kwadratu na nim opisanego"<<endl;
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
