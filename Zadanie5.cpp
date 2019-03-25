/*Napisz program, który poprosi u¿ytkownika
o podanie liczby sekund jako wartoœci
ca³kowite i poka¿e odpowiednik
przekazanej liczby w dniach, godzinach,
minutach i sekundach.
Podaj liczbê sekund: 31600000
31600000 sekund = 365 dni, 17 godzin, 46 minut, 40 sekund*/

#include<iostream>
using namespace std;

main(){

 int a, b, dni, rdni, godz, rgodz, min, rmin ;
 cout<<"Podaj liczbe: ";
 cin>>a;

 
 dni = a/86400;
 rdni = a%86400;
 
 godz = rdni/3600;
 rgodz = rdni%3600;
 
 min = rgodz/60;
 rmin = rgodz%60;
 
 
 
 cout<<dni<<" i "<<rdni<<endl;
 cout<<godz<<" i "<<rgodz<<endl;
cout<<min<<" i "<<rmin<<endl;
cout<<dni<<" dni "<<godz<<" godzin "<<min<<" minut "<<rmin<<" sekund"<<endl;
}
