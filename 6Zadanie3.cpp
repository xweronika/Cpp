/*Napisz funkcjê palindrom sprawdzaj¹c¹, czy
dany ³añcuch typu string jest palindromem.
Palindrom to napis, który czytany po literce
od ty³u jest taki sam, jak czytany od przodu.
Przy tym znaczenie maja tylko wystêpuj¹ce
w napisie litery, zaœ pozosta³e znaki, jak
cyfry, znaki interpunkcyjne i znaki bia³e, s¹
ignorowane. Poza tym nie ma znaczenia
wielkoœæ liter. Na przyk³ad palindromem jest
zdanie Ile Roman ³adny dynda³ na moreli.*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool Zad3(string input){
    string slowo, odwrocony;
    bool wynik;
    for(int i = 0; i < input.length(); i++){
       
	    //if(isalpha(input[i])){   
		//Funkcja isalpha zwraca wartoœæ ró¿n¹ od 
		//zera gdy argument, który zosta³ przekazany 
		//do funkcji jest liter¹ alfabetu. W przeciwnym 
		//wypadku funkcja zwraca wartoœæ zero.
            
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
