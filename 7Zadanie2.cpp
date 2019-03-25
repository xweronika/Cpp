/*Napisz program wczytujący plik tekstowy,
następnie program rozbija go na
poszczególne litery i przedstawia analizę
częstości występowania liter występujących w
pliku.*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{

    fstream plik;
    string line;
    int zlicz[123]={0};
    plik.open("plik.txt", ios::in);
   
   
    while(!plik.eof()){
        getline(plik, line);
        for(int i = 0; i < line.length(); i++){
            cout << (int)line[i] << ", ";
            zlicz[(int)line[i]] += 1;
        }
    }      
       
    cout << endl;
    
	for(int i=97;i<123;i++) 
		if(zlicz[i]>0) 
			cout<<(char)i<<" - "<<zlicz[i]<<endl;                  
    
	for(int i=65;i<91;i++) 
		if(zlicz[i]>0) 
			cout<<(char)i<<" - "<<zlicz[i]<<endl;
}

/* inaczej ale nie działa :
main(){
	
	fstream plik;
	string tekst;
	string litera;
	plik.open("plik.txt", ios::in);

	while (!plik.eof()) {
			
		plik >>litera[0];
		if (!tekst.find(litera[0])){
			tekst = tekst + litera;
		}	
	}

	string tab [tekst.length()];
	for (int k = 0; k<tekst.length();k++){
		tab [k] = tekst[k];
		
	}
	int x = 0, i++;
	while (!plik.eof()) {

	if(tekst.find(tab[i])){
		x++;	
		
	}
i++;
	}	
}
