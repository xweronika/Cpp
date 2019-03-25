/*Napisz program, który w ka¿dej linii pliku
tekstowego zastêpuje wszystkie wyst¹pienia
zadanego ci¹gu znaków innym ci¹giem
znaków. Nazwa pliku, s³owo zastêpowane
oraz zastêpuj¹ce powinny byæ kolejnymi
argumentami wywo³ania programu.
* Mo¿na wykorzystaæ polecenie find z klasy string*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    string linia;
    fstream plik;
    fstream plik2;

    plik.open( "plik.txt", ios::in );
    plik2.open( "plik2.txt", ios::out | ios::trunc ); // trunc - Otwórz, a jeœli istnieje – skasuj star¹ treœæ 
    string a,b;
    cout << "Podaj szukany tekst: ";
    cin >> a;
    cout << "Zamien na: ";
    cin >> b;
    int n;

        while( !plik.eof() )
        {
            getline( plik, linia );

            do{
                n = linia.find( a, 0 );
                if( n != - 1 )
                {
                    linia.replace( n, a.size(), b ); //zast¹p w tej linii od n, do d³ugoœci a, zamieniaj¹c na s³owo b
/*first	iterator postêpowy wskazuj¹cy na pierwszy element zakresu
last	iterator postêpowy wskazuj¹cy na element bêd¹cy za ostatnim elementem zakresu
oldval	wartoœæ, która zostanie zamieniona
newval	nowa wartoœæ*/
                }

            }while (n!=-1);
        plik2 << linia << endl;
            cout << linia << endl;
        }
  

    plik.close();
    plik2.close();

}
