
#include<iostream>
#include<fstream>

using namespace std;

string zaszyfrowanie(string tekst);

main(){
	string tekst;
    cin>>tekst;
    cout<<zaszyfrowanie(tekst);
}

string zaszyfrowanie(string tekst){
	int przesuniecie = 3;
	int t;
	
	for(int i=0; i<tekst.length(); i++){
		
		t = tekst[i]; //string zamienia sie na int

		if(t>=65 && t<=90-przesuniecie) 
			tekst[i] += przesuniecie; //wielkie liter
			
		if(t>=91-przesuniecie && t<=90) 
			tekst[i]=t-26+przesuniecie; // wielkie litery xyz
 		
		if(t>=97 && t<=122-przesuniecie) 
		 tekst[i]=t+przesuniecie; //ma³e liter
 		
		if(t>=123-przesuniecie && t<=122) 
		 tekst[i]=t-26+przesuniecie; //ma³e litery xyz
}		
		

	return tekst;
}
