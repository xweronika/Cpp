/* Napisz funkcje, która wywo³ywana jest z dwoma argumentami. 
Pierwszy to wskaŸnik do tablicy znaków, drugi to rozmiar tej tablicy.  
Funkcja ta ma do pocz¹tku bie¿¹cej treœci tablicy znaków dopisaæ tekst 
"UWAGA:". Jeœli w rezultacie powsta³by ³añcuch d³u¿szy, ni¿ na to 
pozwala obecny rozmiar tablicy znaków - niech trzy ostatnie mo¿liwe 
znaki zostan¹ zast¹pione trzema kropkami.  Jako rezultat swej pracy 
funkcja ta ma zwracaæ wskaŸnik do tablicy znaków, na której dokona³a zmiany.  */

#include <iostream>
#include <cstdlib>

using namespace std;

char * Zad3(char * tab, int rozmiar){
    string uwaga = "UWAGA:";
    string zdanie = tab;
    string wynik = uwaga + zdanie;
    int licznik = 0;
   
    if(wynik.length() > rozmiar){
        tab[rozmiar-2] = '.';
        tab[rozmiar-1] = '.';
        tab[rozmiar] = '.';
    }
    else{
        for(int i = 0; i < rozmiar; i++){
            tab[i] = wynik[i];
        }
    }
   
    return tab;
}

main(){
	  int n = 15;
            char zdanie[n];
            cout << "Wprowadz zdanie: "; cin >> zdanie;
            //char zdanie[ 12 ] = { 'x', 'D', 'D', '\0', '\0', '\0',
            //'\0', '\0', '\0', '\0', '\0', '\0' };
            //char zdanie2[ 12 ] = { 'x', 'D', 'D', 'D', 'D', 'D',
            //'d', 'd', 'd', 'd', 'd', '\0' };
            char * wsk;
            wsk = &zdanie[0];
           
            cout << Zad3(wsk, 12);
            break;
}
