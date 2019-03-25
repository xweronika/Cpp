//odczyt z pliku po znaku

#include<iostream>
#include<fstream>

using namespace std;

main(){
	fstream plik;
	char znaki[10];

	plik.open("plik.txt", ios::in);
	if(!plik)
		cout <<"Nie mozna otworzyc pliku"<<endl;
	
for(int i=0;i<10;i++)
plik >>znaki[i];

plik.close();

for(int i=0;i<10;i++)
cout<<znaki[i];

}
