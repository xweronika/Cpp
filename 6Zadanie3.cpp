/*Napisz funkcj� palindrom sprawdzaj�c�, czy
dany �a�cuch typu string jest palindromem.
Palindrom to napis, kt�ry czytany po literce
od ty�u jest taki sam, jak czytany od przodu.
Przy tym znaczenie maja tylko wyst�puj�ce
w napisie litery, za� pozosta�e znaki, jak
cyfry, znaki interpunkcyjne i znaki bia�e, s�
ignorowane. Poza tym nie ma znaczenia
wielko�� liter. Na przyk�ad palindromem jest
zdanie Ile Roman �adny dynda� na moreli.*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool Zad3(string input){
    string slowo, odwrocony;
    bool wynik;
    for(int i = 0; i < input.length(); i++){
       
	    //if(isalpha(input[i])){   
		//Funkcja isalpha zwraca warto�� r�n� od 
		//zera gdy argument, kt�ry zosta� przekazany 
		//do funkcji jest liter� alfabetu. W przeciwnym 
		//wypadku funkcja zwraca warto�� zero.
            
		//	slowo += tolower(input[i]);
			slowo += input[i];
       // }
    }
   
    for(int i = 1; i <= slowo.length(); i++){
        //odwrocony += tolower(slowo[slowo.length()-i-1]);
        odwrocony += slowo[slowo.length()-i];
    } 
    
   
    if(odwrocony == slowo) wynik = true;
    else wynik = false;
   
    return wynik;
}

main(){
	
	cout<<Zad3("ala");
}





/*#include<iostream>
using namespace std;

void palindrom(string s){
	
		for(int i=0; i<s.length()-1; i++){
			for(int k=s.length(); i!=-1; i--){
			
			if(s[i]==s[k])
			cout<<s[i]<<"  =  "<<s[k];
		
			if (s[i]!=s[k]){
						break;
				cout<<"Slowo nie jest palindromem";
				}

			
			}
		}

}
main(){
		string s;
	cout<<"Podaj tekst:  ";
	getline(cin, s);
	 palindrom(s);
	
}
*/
