/*Napisz program, kt�ry poprosi u�ytkownika o 
podanie imion i nazwiska, a nast�pnie wy�wietli 
je oddzielone spacj� i przecinkiem. */


#include <iostream>
#include <string> 
using namespace std;

main(){
	String s;
	
	cout<<"Podaj imie i nazwisko:";
	getline(cin,s);
	for (int i=0; i<s.size(); i++){
		if(s[i]==' ') cout<<",";
		cout<<s[i];
		}


}
