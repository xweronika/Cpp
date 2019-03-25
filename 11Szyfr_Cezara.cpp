/*Napisz program wczytuj¹cy dowolny plik tekstowy, nastêpnie program ma 
zakodowaæ plik za pomoc¹ szyfru Cezara i zapisaæ wynik do innego pliku.*/

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;


main(){
		
	fstream plik1, plik2;
	string tekst, nazwa1, nazwa2;
	int przesuniecie;
		
		cout<<"Podaj nazwe pliku wejsciowego"<<endl;
		cin>>nazwa1;
		cout<<endl<<"Podaj nazwe pliku wyjsciowego"<<endl;
		cin>>nazwa2;
		cout<<endl<<"Podaj wspolczynnik przesuniecia"<<endl;
		cin>> przesuniecie;
		
	plik1.open(nazwa1.c_str(), ios::in);
	plik2.open(nazwa2.c_str(), ios::out);
		if(!plik1)
			cout <<"Nie mozna otworzyc pliku"<<endl;				
		
		int t;
	
	while(!plik1.eof()){
		
		getline(plik1,tekst);
		
		for(int i=0; i<tekst.length(); i++){    
		
			t = tekst[i]; 
			if(t>=65 && t<=90-przesuniecie) 
				tekst[i] += przesuniecie; 
			
			if(t>=91-przesuniecie && t<=90) 
			   	tekst[i]=t-26+przesuniecie; 
 		
			if(t>=97 && t<=122-przesuniecie) 
				 tekst[i]=t+przesuniecie; 
 		
			if(t>=123-przesuniecie && t<=122) 
				 tekst[i]=t-26+przesuniecie; 
		}
		
		if(!plik2)
			cout <<"Nie mo¿na zapisac pliku"<<endl;
	
		for(int j=0; j<tekst.length(); j++)
			plik2<<tekst[j];
		plik2 << endl;
	}
	
	plik1.close();	
	plik2.close();
	
}
