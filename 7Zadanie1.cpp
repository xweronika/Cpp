/*Napisz program, kt�ry w ka�dej linii pliku
tekstowego zast�puje wszystkie wyst�pienia
zadanego ci�gu znak�w innym ci�giem
znak�w. Nazwa pliku, s�owo zast�powane
oraz zast�puj�ce powinny by� kolejnymi
argumentami wywo�ania programu.
* Mo�na wykorzysta� polecenie find z klasy string*/

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
    plik2.open( "plik2.txt", ios::out | ios::trunc ); // trunc - Otw�rz, a je�li istnieje � skasuj star� tre�� 
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
                    linia.replace( n, a.size(), b ); //zast�p w tej linii od n, do d�ugo�ci a, zamieniaj�c na s�owo b
/*first	iterator post�powy wskazuj�cy na pierwszy element zakresu
last	iterator post�powy wskazuj�cy na element b�d�cy za ostatnim elementem zakresu
oldval	warto��, kt�ra zostanie zamieniona
newval	nowa warto��*/
                }

            }while (n!=-1);
        plik2 << linia << endl;
            cout << linia << endl;
        }
  

    plik.close();
    plik2.close();

}
